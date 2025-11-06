#include<bits/stdc++.h>
#include"Class1.cpp" // INCLUDES THE CLASS EXISTING IN ANOTHER FILE
using namespace std;
class TITAN{

    public:
    //Properties of the class: 
    string Name;
    int Health;
    int LEVEL;

};
int main(){

    // Creation of an object 
    TITAN Armoured;
    Armoured.Name = "Reiner";
    Armoured.Health = 90;
    Armoured.LEVEL = 2000;

    cout << "Size : " << sizeof(Armoured) << endl; // Size = total number of bytes of properties in the class
    //For an empty class -> size = 1...    C++ requires that every object in memory must have a unique address.
    // If an empty class had size 0, then multiple objects of that class would end up having the same address, which would break the language rules.

    // To access the properties of a class, use the dot operator (.)
    /*
    ACCESS MODIFIERS -->
        1) public : whatever written below public is then treated as public property and can be accessed anywhere
        2) private : By default. Can only be accessed inside the class.
        3) protected
    */

    cout << "Name of titan 1 is : " << Armoured.Name << endl;
    cout << "Health of titan 1 is : " << Armoured.Health << endl;
    cout << "Level of titan 1 is : " << Armoured.LEVEL << endl;


    // Getter and Setter --> used to set or access the private properties inside a class

    Scouts Levi;

    Levi.Name = "LEVI ACKERMAN";
    cout << "Name of Scout 1 is : " << Levi.Name << endl;
    Levi.setAge(32);
    cout <<"Age of Levi is : " <<  Levi.getAge() << endl;
    Levi.setHeight(160);
    cout << "Height of Levi is : " << Levi.getHeight() << endl;


    //PADDY + GREEDY ALIGNMENT 

    

    cout << "Size of Outsider class is : " << sizeof(Levi) << endl;
    cout << "Size of Insider class is : " << sizeof(Armoured) << endl;


    return 0;
}