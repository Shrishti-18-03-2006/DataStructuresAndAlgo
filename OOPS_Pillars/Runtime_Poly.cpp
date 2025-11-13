#include<bits/stdc++.h>
using namespace std;

// Also called Dynamic Polymorphism
// Include Method(Function) Overriding
//Runtime polymorphism is Dependent on INHERITENCE 



class Animal {
public:
    
    void speak() {
        cout << "Hi!, I have no Sound" << endl;
    }
};

class dog : public Animal{

    public:
        void speak(){
            cout << "I'm a Dog and I bark!\n";
        }

};

class cat : public Animal{

    public : 
        void speak(){
            cout << "I'm a CAT and I meow!\n";
        }
};

class Sloth : public Animal{


};


int main() {
    Animal aadmi;
    aadmi.speak();

    dog D;
    D.speak();

    cat C;
    C.speak();

    Sloth S;
    S.speak();
    

    return 0;
}

