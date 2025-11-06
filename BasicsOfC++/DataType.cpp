#include <bits/stdc++.h> 
using namespace std; // harr jagah std use karne ke badle we can write it here in starting directly 
int main() {   
/*
    // OUTPUT IN C++ 

    //DATA TYPES :-

    //int data type
    int age = 19;
    cout << age << endl;

    // long data type ----> same as int but with bigger range
    // long long data type ---> bigger range

    //char data type
    char grade = 'A';
    cout << grade << endl;

    //String mein ek baar mein ek hi word store hoga. To store two different words, we need two variables 
    string S;
    cout << "Enter the string: " ;
    cin >> S;
    cout << "The string is: " << S << endl;
    
    //To print the entire sentence, use getline()
    string Str;
    cout << "Enter the Sentenc :" ;
    getline(cin, Str);
    cout << "The sentence is :" << Str << endl;



    //float data type
    float PI = 3.14f; //float wale mein value daalne ke baad write f in the end of number
    cout << PI << endl; // kisi bhi fixed value wale data ko store karne ke liye use capital letters like here used as PI 

    //bool data type
    bool isSafe = true;
    cout << isSafe << endl;

    //double data type
    double price = 100.99;
    cout << price << endl;




    // TYPE CONVERSION - implicit - compiler automatically kar deta hai 

    char G1 = 'A'; //its ASCII value is stored 
    int V1 = G1 ; 
    cout << V1 << endl;




    // TYPE CASTING - explicit - programmar khud karta hai (big data type se small data type mein convert krne ke liye)

    double P1 = 99.99; //here after type casting, decimal ke baad ke saare digits ignore ho jaate hai and bass decimal ke pehele wala digits gets printed
    int NEWPRICE = (int)P1; //TYPE CAST Krne ke liye parenthesis mein naya data type batate hai like here is (int)
    cout << NEWPRICE << endl; 

    // Or Type Casting for char to it's ASCII values
    int a = 'A'; // output = 65
    cout<< a << endl;

    //or Type casting a number (ASCII value) to it's char form
    char V= 97; // output = 'a'
    cout << V << endl;

    //IMPORTANT CONCEPT HERE -------> when we try to convert an integer value with 4 bytes to char value with 1 byte then only the last byte in the integer value is converted to the char data type
    char X = 123456; 
    cout << X << endl;






    //INPUT In C++ 
    //A) using cin ---> doesn't read tab, space, new line
    int Class;
    cout << "Enter your Class:";
    cin >> Class;
    cout << "Your class is:" << Class << endl; 

    //B) usin cin.get() ----> character deta hai
    int A ;
    cout << "Enter the value of A :";
    A = cin.get();
    cout << "the value of A is :" << A << endl; // here it will give the ASCII value of The number or anything entered in variable A
// i.e cin.get () gives you the ascii value of even tab, space, enter or number or characters etc.


  






    //OPERATORS 


    //1) ASSIGNMENT OPERATORS 

    int a = 10 , b = 5 ; //comma se separate kr ke we can define multiple variables of same DType 
    
    cout << "Sum is :" << (a+b) << endl; 
    cout << "Difference is :" << (a-b) << endl;
    cout << "Multiplication is :" << (a*b) << endl;
    cout << "Division is :" << (a/b) << endl;    //quotient deta hai so it will give 2
    cout << "Modulo is :" << (a%b) << endl;     //Remainder deta hai so it will give 0 


            //DIVISION OPERATOR 

    int A = 5 , B = 2 ;
    cout << "the Quotient is :" << (A/B)<< endl; // [(int / int) = int]   here the quotient would be 2.5 in maths but yaha decimal ke pehle wala hi bass output deta hai


    //PURA QUOTIENT DENE KE LIYE WE WILL USE THE FOLLOWING THREE WAYS 
    double A1 = 5 , B1 = 2; //yaha double kar do dono values ko taaki decimal ke baad wala bhi mile in quotient 
    cout << "Full quotient in 1st way is :" << (A1/B1) << endl; 

    //OR 
     int A2 = 5;
     double B2 = 2; // Kisi ek ko double data type bana do
     cout << "Full Quotient in 2nd way is :" << (A2/B2) << endl;

     //OR 
     int A3 = 5 , B3 = 2;
     cout << "Full Quotient in 3rd way is : " << (A3/ double(B3)) << endl; //TYPE CAST KAR DO VALUE KO  
    


    // 2) RELATIONAL OPERATORS 

    cout << (3<5) << endl; //true -->1
    cout << (3>=5) << endl; //False -->0
    cout << (3>=3) << endl; //True --> 1
    cout << (3!=5) << endl; //True -->1



    // 3) LOGICAL OPERATORS 

    // a) || ---> PIPE -> for OR
    // b) && ---> Ampersand -> for And 
    // c) ! ---> Logical Not -> Not False will become True and True will become False 


    //c) LOGICAL NOT (!)
    cout << (3>1) << endl; //This returns True but,
    cout << !(3>1) << endl; //This will give opposite of the above command.
    
    //a) OR (||) -----> multiple statements mein se koi bhi ek true then True will be given 
    cout << ((3>5) || (4<5)) << endl; // one of the conditions is true so true will be output 
    cout << ((4<2) || (5<3)) << endl; // all conditions are false so false will be the output


    //b) AND (&&) ------> all the statements or conditions must be true to print True 
    cout << ((3>5) && (5<4)) << endl;// will return False as one of the conditions is False 
    cout << ((4<7) && (8<9)) << endl; // will return true as both the conditions are True 
    cout << ((2<1) && (4<2)) << endl; // will return False as both conditions are false


    // 4) BINARY OPERATORS --------> (Do numbers ya varoiables pe work karta hai) +, - , * , / , % 
    // 5) UNARY OPERATORS ---------> (Ek hi number pe work karne ke liye use hota hai) 
        // Increment --> (++) -----> 

            //A) a++ -----> (kaam then update) POST INCREMENT OPERATOR
            int K= 10;
            int L = K++; // (pehle L mein K ki value store hogi, phir K khud ko update karega by adding 1 in itself)
            cout << "L=" << L << endl; // OUTPUT = 10
            cout << "K =" << K << endl; // OUTPUT = 11


            //B) ++a -----> (Update then kaam) PRE INCREMENT OPERATOTR 
            int M= 100;
            int N = ++M ; // (pehle M ki value update hoke 101 ho jayegi and then N mein uss M ki updated value store hogi)
            cout << "N=" << N << endl; // OUTPUT = 101
            cout << "M=" << M << endl; // OUTPUT = 101
            
        // Decrement --> (--)
            //A) [a--] -------> (kaam then update) POST DECREMENT OPERATOR
            int O= 20;
            int P = O-- ; // (pehle P mein O ki value store hogi, phir O khud ko update karega by subtracting 1 in itself)
            cout << "P=" << P << endl; // OUTPUT = 20 
            cout << "O =" << O << endl; // OUTPUT = 19

            //B) [--a] -------> (Update then kaam) PRE DECREMENT OPERATOR
            int Q= 200;
            int R = --Q ; // (pehle Q ki value update hoke 199 ho jayegi and then R mein uss M ki updated value store hogi)
            cout << "R=" << R << endl; // OUTPUT = 199
            cout << "Q=" << Q << endl; // OUTPUT = 199


     

    // BITWISE OPERATOR 

    int a,b;
    cout << "Enter the value of A: " ;
    cin >> a;
    cout << "Enter the value of B: ";
    cin >> b;


    cout << "a&b = " << (a&b) << endl;
    cout << "a|b = " << (a|b) << endl;
    cout << "~a = " << ~a << endl;
    cout << "~b = " << ~b << endl;
    cout << "a^b = " << (a^b) << endl;


    

    //LEFT SHIFT and RIGHT SHIFT OPERATOR (bade number mein left shift krne pe negative bann skta hai    and    negative numbers ka right shift krne pe final value is compiler dependent)
    cout << (17>>1) << endl; // basically ek baar half ho jayega
    cout << (17>>2) << endl; // do baar half ho jayega
    cout << (19<<1) << endl; // ek baar 2 se multiply hoga
    cout << (19<<2) << endl; // do baar 2 se multiply hoga



    

















    //Unsigned int ----> sirf +ve nos store karta hai so if we specify any -ve no in it then woh 1st most imp bit ko ignore kar ke pure bits ko ginn kar usko bohot bada number bana dega 
    // int can store both +ve and -ve numbers in it
    unsigned int K = -110;
    cout << K << endl;

*/

    unsigned int L = 112731;
    cout << L << endl;


    return 0; 
} 