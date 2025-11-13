#include<bits/stdc++.h>
using namespace std;


/*

Constructor : 
    i) Parent class 
    ii) Child class
Deconstructor : 
    i) Child class
    ii) Parent class
    
*/
class Person{
    public:
        Person(){
            cout << "Constructor in Person class \n";
        }
        ~Person(){
            cout << "Deconstructor in Person class \n";
        }
};

class student :public Person{
    public:
        student(){
            cout << "Constructor in Student class \n";
        }
        ~student(){
            cout << "Deconstructor in Student class \n";
        }
};

int main(){
    student s1;


    return 0;
}