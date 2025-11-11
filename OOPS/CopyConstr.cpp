#include<bits/stdc++.h>
using namespace std;
class Titan{

    public:
    int Age;
    int Height;
    Titan(){
        cout << "Default Constructor called!\n";
    }

   // PARAMETERIZED CONSTRUCTOR
    Titan(int Age, int Height){
        this->Height = Height; // The address of the current object is stored in "this". "this" is a pointer.
        this->Age = Age;
    }

    //COPY CONSTRUCTOR
 /*   Titan(Titan& Eren){

    }
    int getAge(){
        return Age;
    }
    int getHeight(){
        return Height;
    }
    void setAge(int a){
        Age = a;
    }
    void setHeight(int h){
        Height = h;
    }*/
    void print(){
        cout << "The AGE is : " << this->Age << endl;
        cout << "The HEIGHT is : " << this->Height << endl;
    }

    // COPY CONST (SELF)
    Titan(Titan& armoured){ // The "&" symbol -> for passing b y reference so that it does not get stuck in an infinite loop
        cout << "Inside copy constructor \n";
        this-> Age = armoured.Age;
        this-> Height = armoured.Height;
    }
};
int main(){

    Titan Colossal(17,2000);
    cout << "For Colossal : \n";
    Colossal.print();
    Titan ArminColossal(Colossal);  // All the objects copied inside the new one
    cout << "For Armin Colossal : \n";
    ArminColossal.print();

    // SHALLOW AND DEEP COPY -> Default copy const will follow shallow copy 
    // In shallow copy we access the same memory address with different names and any changes in either will reflect after calling the other object

    // TO DEEP COPY  --> refer the other file




    return 0;
}