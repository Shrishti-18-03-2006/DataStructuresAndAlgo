#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 5;
    cout << &num << endl; // Gives the address in HEXADECIMAL FORMAT of the variable

    //POINTER stores the address 
    // To initialize
    int i = 10;
    int *ptr = &i; // * is dereference operator
    cout << "Address of i is : " << ptr << endl<< "And value of i is : " << *ptr << endl;
    (*ptr)++;
    cout <<"Value of i is : " <<  i << endl << "Address of i is : " <<  ptr << endl;

    cout << "size of int is : " << sizeof(i) << endl;
    cout << "Size of pointer ptr is : " << sizeof(ptr) << endl; // EVERY POINTER's SIZE IS 8 BYTES IN THE SYSTEM, NO MATTER WHAT THE DATA TYPE IS AS IT ALWAYS STORES ADDRESS.

    // NULL POINTER GIVES SEGMENTATION FAULT (Nothing is wrong with it )

    int *p = 0;
    p = &i;
    cout << "Address of i is : " << p << endl<< "And value of i is : " << *p << endl;
 
    //COPY A POINTER 
    int *q = p;
    cout << p << " = " << q << endl;
    cout << *p << " = " << *q << endl;

    // IMPORTANT 
    q++;
    cout << q << endl; // increases +4 cuz its int. If it were char, it would increase +1. If double then +8 and so on


    // MORE IN POINTERS 
    


    return 0;
}