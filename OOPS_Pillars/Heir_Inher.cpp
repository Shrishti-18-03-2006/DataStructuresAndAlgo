#include<bits/stdc++.h>
using namespace std;
/*
one class serves are parent class for a multiple child classes 
*/

class A{
    // pvt data memeber of any class cannot be inherited from parent class. NON ACCESSIBLE IN ANY CASE
    // in case of protected, you can inherit using getter setters 
    public:
        void funct1(){
            cout << "\tInside Parent Class" << endl;
            cout << "\tLeaving Parent class" << endl;
        }
};

class B : public A{
    public:
        
        void funct2(){
            cout << "\tInside Child Class 1 " << endl;
           cout << "\tLeaving Child Class 1\n";
        }
};

class C : public A{

    public: 

    void funct3(){
        cout << "\tInside Child class 2 \n";
        cout << "\tLeaving Child Class 2 \n";

    }
};

int main(){
    A a1;
    cout << "Going inside Parent Class : " << endl;
    a1.funct1();
    
    cout << "Going inside child class 1 : \n";
    B b1;
    b1.funct1();
    b1.funct2();

    cout << "Going inside child class 2 : \n";
    C c1;
    c1.funct1();
    c1.funct3();



    return 0;
}