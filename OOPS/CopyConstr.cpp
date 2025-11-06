#include<bits/stdc++.h>
using namespace std;
class Titan{

    public:
    int Age;
    int Height;
    Titan(){
        cout << "Default Constructor called!\n";
    }

    // PARAMETERIZED CONSTRUCTOR
    Titan(int Age, int Height){
        this->Height = Height; // The address of the current object is stored in "this". "this" is a pointer.
        this->Age = Age;
    }

    //COPY CONSTRUCTOR
    Titan(Titan& Eren){

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
    void print(){
        cout << "The AGE is : " << this->Age << endl;
        cout << "The HEIGHT is : " << this->Height << endl;
    }


};
int main(){

    Titan Colossal(17,2000);
    cout << "For Colossal : \n";
    Colossal.print();
    Titan ArminColossal(Colossal);  // All the objects copied inside the new one
    cout << "For Armin Colossal : \n";
    ArminColossal.print();


    return 0;
}