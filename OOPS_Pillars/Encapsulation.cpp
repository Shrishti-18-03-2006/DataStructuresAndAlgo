#include<bits/stdc++.h>
using namespace std;
/*
ENCAPSULATION : wrapping up data members and functions and creating a single entity.

Fully encapsulated class : all the data members are marked private 

Why Encapsulation ? 
Hinding Information or Data
Increases Secutity 
if we want we can make the class as "read only"
Code reusability 
Helps in unit testing 

*/

class Student{

    private : 
        string name;
        int age;
        int height;
    
    public:
    //Setter functions are always a void functions
        void setAge(int A){
            age = A;
        }
        void setname(string N){
            name = N;
        }
        void setheight(int H){
            height = H;
        }

    //Getter functions are always according to the return type 
        int getAge(){
            return this-> age;
        }
        string getname(){
            return this-> name;
        }
        int getheight(){
            return this-> height;
        }

};

int main(){

    Student s1;
    s1.setname("Shrishti");
    s1.setAge(19);
    s1.setheight(159);

    cout << "The student s1 details are : \n";
    cout << "Age : " << s1.getAge() << endl;
    cout <<"Name : " << s1.getname() << endl;
    cout << "Height : " <<  s1.getheight() << endl;

    

    return 0;

}