#include<bits/stdc++.h>
using namespace std;

// Existing in many forms

class Geeks {
public:
    
    // Function to add two integers
    void add(int a, int b) {
        cout << "Integer Sum = " << a + b
        << endl;
    }
    
    // Function to add two floating point values
    void add(double a, double b) {
        cout << "Float Sum = " << a + b
        << endl ;
    }
};

int main() {
    Geeks gfg;
    
    // add() called with int values
    gfg.add(10, 2);

    // add() called with double value
    gfg.add(5.3, 6.2);

    return 0;
}

//Types :
// 1) Complie time Polymorphism  : i.Function overloading  ...... ii. Operator overloading
// 2) Runtime Polymorphism