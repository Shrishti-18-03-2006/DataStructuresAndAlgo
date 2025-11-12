#include<bits/stdc++.h>
using namespace std;
class Person{

    public:

        char *name ;
        int Age;
        int Level; 

        // Default constructor : This will automatically be useless after making a new parameterised constructor 
        Person(){
            this-> name = nullptr;
            this-> Age = 0;
            this-> Level = 0;
        }

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
        ~Person(){
            delete[] name; // DO NOT EVER FORGET TO DECONSTRUCT THE DYNAMIC MEMORY ALLOCATED IN THE CLASS 
        }
    
        void printing(){
            cout << "The name is : " << name << endl;
            cout << "The Age is :" << Age << endl;
            cout << "The Level is : " << Level << endl;
        }

};
int main(){

    Person P1("Shrishti",19,13);
    cout << "Before changes : " << endl<< endl;
    cout << "For P1:\n";
    P1.printing();

    Person P2(P1);
    cout << "For P2:\n";
    P2.printing();

    cout << endl << endl;
    // Making changes in P1.name :
    P1.name[0] = 'P';
    P1.Age = 100;

    cout << "After Changes : \n\n";
    cout << "P1 is : \n";
    P1.printing();
    cout << "P2 is : \n";
    P2.printing();




    return 0;
}