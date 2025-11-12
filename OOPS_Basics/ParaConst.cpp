#include<bits/stdc++.h>
using namespace std;
class Titan{

    public:
    int Age;
    int Height;
    string Name;

    Titan(){
        cout << "Constructor called!\n";
    }

    // PARAMETERIZED CONSTRUCTOR
    Titan(int Height){
        cout << "inside This --> " << this << endl;
        this->Height = Height; // The address of the current object is stored in "this". "this" is a pointer.
    }

    int getAge(){
        return Age;
    }
    int getHeight(){
        return Height;
    }
    void setAge(int a){
        Age = a;
    }
    void setHeight(int h){
        Height = h;
    }


};

int main(){
    
    Titan Levi(160);
    cout << "Address of Levi is : " << &Levi << endl;
    Levi.getHeight();

    Titan *Colossal = new Titan(1200);
    (*Colossal).Name = "Bertoto";
    (*Colossal).Age = 17;
    cout << "Address of Colossal Titan is : " << Colossal << endl;
    (*Colossal).getHeight();

    return 0;
}