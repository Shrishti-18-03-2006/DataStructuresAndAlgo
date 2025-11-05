#include<bits/stdc++.h>
using namespace std;

#define PI 3.145 // DEFINING A MACRO (Doresn't use storage) and it cannot be changed or updated.
#define DEBUG

inline int getMax(int& a, int& b){
    return (a>b) ? a : b;
}

int main(){
    //MACRO -> a piece of code that is replaced by value of macro 

    int r = 10;
    double area = PI * r * r;
    cout << "Area is : " << area << endl;

        //PREDEFINED MACROS 
        cout << "This is line " << __LINE__ << " in file " << __FILE__ << " compiled on " << __DATE__ << " " << __TIME__ << endl;

        //CONDITIONAL MACROS
        int x = 5, y = 10;
        int sum = x + y;

        // This block will only be compiled if DEBUG is defined
        #ifdef DEBUG
            std::cout << "[DEBUG] x = " << x << std::endl;
            std::cout << "[DEBUG] y = " << y << std::endl;
            std::cout << "[DEBUG] sum = " << sum << std::endl;
        #endif

        // Always compiled
        std::cout << "Sum: " << sum << std::endl;

    // Global Variables --> Not preferred. 
    // DisADV = Any function can change the variable and hence it is a bad bractice to use global variable
    // When it comes to sharing the variable, use Reference variable 




    //INLINE FUNCTIONS --> function call is replaced by function body 
    int a = 1, b= 2;
    cout << getMax(a,b) << endl;
    a = a+3;
    b = b+1;
    cout << getMax(a,b) << endl;


    


    return 0;
}