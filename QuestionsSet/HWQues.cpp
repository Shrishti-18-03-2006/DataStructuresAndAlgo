#include <bits/stdc++.h> 
using namespace std;
int main(){
/*
    // using "if" each time would print all the conditions thata are satisfied
    int A = 24;
    if ( A > 20 ){
        cout << "love";
    }
    if ( A == 24 ){
        cout << "Lovely";
    }
    else {
        cout << "Babbar";
    }
    cout << A;
    cout << endl;


    //using if else if else will print the first command that is satisfied, rest all the conditions are not even checked if the initial condition is true
    int B = 24;
    if ( B > 20 ){
        cout << "love";
    }
    else if ( B == 24 ){
        cout << "Lovely";
    }
    else {
        cout << "Babbar";
    }
    cout << B;
    cout << endl;


    //U case, L case , Numeric conditions
     char ch;
     cout << "Enter a character :";
     cin>> ch;

     if(ch>='A' && ch<='Z'){
        cout << "It is upper case"<< endl;
     }
     else if(ch>='a' && ch<='z'){
        cout << "It is lower case"<< endl;
     }
     else if(ch>='0' && ch<='9'){
        cout << "It is numeric" << endl;
     }
     else {
        cout << "Something else" << endl;
     }




     // sum of all even numbers in a series

     int N, i= 2, sum = 0;
     cout << "Enter the value of N :" ;
     cin >> N;
     while (i<=N){
        sum = sum +i;
        i=i+2;
     }
     cout << "The sum of all the even numbers is :" << sum << "\n";




     // Farenheit to Celsius table -------> NOT DONE THIS QUESTION
    double F,C;
    cout << "Enter the temperature in F:";
    cin >> F;
    while (F<=C){
        C = ((F-32)*(5/9));
        cout << F << C;


    }
    cout << "F" << F << "\t" << "C" << C << endl;




    // 1
    // 23
    // 456
    // 78910

    
    int Num;
    cout << "Enter the value of Num :";
    cin >> Num;
    int count = 1;
    int i1 = 1;
    while (i1<=Num){
        int j1 = 1;
        while (j1<=Num){
            cout << count<< " ";
            count = count +1;
            j1= j1+1;

        }
        cout << endl;
        i1=i1+1;

    }


*/

    // 1 2 3 4 5 5 4 3 2 1 
    // 1 2 3 4 * * 4 3 2 1
    // 1 2 3 * * * * 3 2 1  ------> UNSOLVED MYSTREY FOR THIRD TRIANGLE
    // 1 2 * * * * * * 2 1
    // 1 * * * * * * * * 1

    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    int i = 1;
    while (i <= N){

        // Triangle 1st 
        int j = 1;
        int T1 = N-i+1;
        while(T1){
        cout << j << " " ;
        j++;
        T1--;
        }

        // Triangle 2nd

        int T2 = (i-1)*2;
        while (T2 != 0){
            cout << "*" << " ";
            T2 -- ;
         }

/*      // Triangle 3rd

        int n = 5;
        int T3 = j;
        while(T3 > N-i+1 && T3 <= 2*N){
            cout << n-j+1 << " ";
            n-- ; 
        }
        T3++;
     */       
        }
        cout << endl;
        i++;





    

    


     return 0;

}