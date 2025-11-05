#include<bits/stdc++.h>
using namespace std;
class Titan{

    public:
    int Age;
    int Height;
    Titan(){
        cout << "Constructor called!\n";
    }

    // PARAMETERIZED CONSTRUCTOR (START HERE AGAIN)
    Titan(int Height){
        Height = Height;
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
    //Dynamic allocations 

    Titan *T = new Titan;
    cout << "Size of Titan class is " << sizeof(T) << endl;
    //To input (setter):
    (*T).setAge(19);
    (*T).setHeight(159);
       // OR //
    T->setAge(19);
    T->setHeight(159);

    //For Output (getter)
    cout << "Age of T is : " << (*T).getAge() << endl;
    cout << "Height of T is : " << (*T).getHeight() << endl;
                    // OR //
    cout << "Age of T is : " << T->getAge() << endl;
    cout << "Height of T is : " << T->getHeight() << endl;

    cout << "HI!\n";
    Titan Colossal;
    // Constructor ---> Invoked during object creation. It has no return type.
    cout << "HELLO!\n";

    Titan *ColossalOfArmin = new Titan;





    return 0;
}