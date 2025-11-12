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

class student :public Person{
    public:
        int roll;
        void setroll(int r){
            roll = r;
        }
        void getInfo2(){
            cout << "\tInside Child Class : " << endl;
            cout << "\tName : " << name << "  Age : " << age << "  Roll No. : " << roll << endl;
            cout << "\tLeaving Child Class.\n";
        }
};

int main(){
    student s1;
    s1.setInfo("Shrishti",19);
    cout << "Go inside Parent class:\n";
    s1.getInfo() ;
    
    s1.setroll(40);
    cout << "Go inside Child class:\n";
    s1.getInfo2();

    return 0;
}