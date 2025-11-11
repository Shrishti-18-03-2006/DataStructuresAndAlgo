#include<bits/stdc++.h>
using namespace std;

class Person{

    public:

        char *name ;
        int Age;
        int Level; 

        // Making the parameterised const
        Person(const char *n, int a, int l) {
            name = new char[strlen(n) + 1];
            strcpy(name, n);
            Age = a;
            Level = l;
        }

        // Making a deep copy 
        Person(const Person& Temporary_Copy){ //Adding "const" is a crucial step
            cout << "Calling the copy constructor \n";
            name = new char[strlen(Temporary_Copy.name)+1]; // THIS STEP IS ALSO CRUCIAL!!!!!
            strcpy(name , Temporary_Copy.name); // AND THIS AS WELL
            Age = Temporary_Copy.Age;
            Level = Temporary_Copy.Level;

        }

        //Copy assign operator compatible with the Deep Copy constructor 
        Person& operator=(const Person& temp) {
        cout << "Calling the copy assignment operator\n";
        if (this == &temp) return *this;

        delete[] name;
        name = new char[strlen(temp.name) + 1];
        strcpy(name, temp.name);
        Age = temp.Age;
        Level = temp.Level;

        return *this;
    }
        ~Person(){
            delete[] name; // DO NOT EVER FORGET TO DECOINSTRUCT THE DYNAMIC MEMORY ALLOCATED IN THE CLASS 
        }
    
        void printing(){
            cout << "The name is : " << name << endl;
            cout << "The Age is :" << Age << endl;
            cout << "The Level is : " << Level << endl;
        }

};
int main(){

    Person P1("Shrishti",19,13);
    Person P2("Niyanta",17,12);
    cout << "Before Copying : \n";
    cout <<"P1 is : \n";
    P1.printing();
    cout << "P2 is : \n";
    P2.printing(); 

    cout << endl << endl;

    P1 = P2;
    cout << "After Copying : \n";
    cout <<"P1 is : \n";
    P1.printing();
    cout << "P2 is : \n";
    P2.printing(); 




    return 0;
}