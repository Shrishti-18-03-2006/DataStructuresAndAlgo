#include<bits/stdc++.h>
using namespace std;

/*
A Parent class 
A Child class
the Child class DERIVED from the parent class
All the members as well as methods get derived 

*/
class Person{
    public:
        string name;
        int age;
        void setInfo(string n, int a){
            name = n;
            age = a;
        }
        void getInfo(){
            cout << "\tInside Parent Class" << endl;
            cout << "\tName : " << name << "  Age : " << age << endl;
            cout << "\tLeaving Parent class" << endl;
        }
};


int main(){
    

    return 0;
}