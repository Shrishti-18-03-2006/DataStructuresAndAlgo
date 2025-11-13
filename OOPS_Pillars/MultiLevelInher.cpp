#include<bits/stdc++.h>
using namespace std;

class Person{
    // pvt data memeber of any class cannot be inherited from parent class. NON ACCESSIBLE IN ANY CASE
    // in case of protected, you can inherit using getter setters 
    public:
        string name;
        int age;
        int height;

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

class student : public Person{
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

class failed : public student{

    public: 

    void giveAge(){
        cout << "Age of failed student is : " << age << endl;

    }
};

int main(){
    failed f;
    f.giveAge();

    return 0;
}