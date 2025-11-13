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

class professor{
    public:
        int id;
        void setId(int i){
            id = i;
        }
        void getprof(){
            cout << "Id of Professor is : " << id << endl;
        }
};

class retard : public Person, public professor{
    public: 

        void getretardname(){
            cout << "\n\nDetails of the retarded professor is : " << endl;
            cout << "\tName : " << name << "  \tAge : " << age << "  \tID  : " << id << endl;
        }

};


int main(){

 
    retard R1;
    R1.name = "Sadanand";
    R1.age = 90;
    R1.id = 3333;

    R1.getretardname();

    retard R2;
    R2.name = "Magar Vikas";
    R2.age = 10000;
    R2.id = 73473;
    R2.getretardname();

    return 0;
}