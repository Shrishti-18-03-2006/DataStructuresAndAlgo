#include<bits/stdc++.h>
using namespace std;

class Person{

    public:

        char *name ;
        int Age;
        int Level; 
        static int TimetoDie; // A property that is independent of other factos 
        //STATIS KEYWORD : belongs to class . U don't need to create an object to access this 

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

        // STATIC FUNCTION : Also not related to the object but only class. Can be accessed with the class itself and you don't need to create any object to access it.
        //                 : Also doesn't have the "this" keyword
        //                 : They can only access static members!
        static int random(){
            
            return(TimetoDie);
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

int Person::TimetoDie = 0;

int main(){

    cout << Person::TimetoDie << endl;

    Person p1("ABC",12,8);
    cout << p1.TimetoDie << endl; // NOT RECOMMENDED : as it belongs to a class not an object 

    cout << Person::random() << endl;

    return 0;
}