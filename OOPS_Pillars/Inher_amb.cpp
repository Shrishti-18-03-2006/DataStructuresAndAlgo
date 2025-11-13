#include<bits/stdc++.h>
using namespace std;

/*
Combination of more than one type of inheritence 
*/

class A{

    public: 
    void funct(){
        cout << "\tinside A" << endl;
    }
};


class B {

    public:
    void funct(){
        cout << "\tinside B\n";
    }
};


class C : public A, public B{

};


int main(){

    C c1;

    cout << "Calling function of A : \n";
    c1.A::funct();
    
    cout << "Calling function of B : \n";
    c1.B::funct();

    return 0;
}