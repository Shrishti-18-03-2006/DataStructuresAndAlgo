#include <bits/stdc++.h>
using namespace std;
int main(){

/*
    // "1 2 3 4" in rows

    int n;
    cout << "enter the value of n :";
    cin >> n;
    int rows = 1;
    while(rows<=n){
        int col = 1;
        while (col<=n){
            cout << col;
            col=col+1;
        }
        cout << "\n";
        rows=rows+1;
    }

    cout << endl;

    // "4 3 2 1" in rows

    int N ;
    cout << "Enter the value of N :" ;
    cin >> N;
    int i = 1;
    while (i<=N){
        int j = 1;
        while (j<=N){
            cout << N-j+1;
            j = j+1;
        }
        cout << "\n";
        i= i+1;
    }


    // 1 2 3
    // 4 5 6 ---> this pattern based
    // 7 8 9  

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




    // TRIANGLE PATTERN BASED 

    //*
    //**  -----> Triangle pattern
    //*** 
    //**** 

    int N;
    cout << "Enter the value of N :" ;
    cin >> N;
    int i = 1;
    while (i<=N){
        int j = 1;
        while(j<=i){
            cout << "*";
            
            j = j+1;
        }
        cout << endl;
        i = i+1;




    }
    
    


    // 1
    // 22
    // 333 
    // 4444
    // 55555

    int N;
    cout << "Enter the value of N :" ;
    cin >> N;
    int i = 1;
    while (i<=N){
        int j = 1;
        while(j<=i){
            cout << i;
            
            j = j+1;
        }
        cout << endl;
        i = i+1;


    }



    // 1
    // 23
    // 456
    // 78910

    int N;
    cout << "Enter the value of Num :";
    cin >> N;
    int count = 1;   // idhar count ko int i ka baad hi specify kar dete hai taaki ye certain type of pattern bane
    int i1 = 1;
    while (i1<=N){
        int j1 = 1;
        while (j1<=i1){
            cout << count<< " ";
            count = count +1;
            j1= j1+1;

        }
        cout << endl;
        i1=i1+1;

    }




     // 1
     // 23
     // 345
     // 4567

     int N;
     cout<< "Enter the value of N:";

     cin >> N;
     int i = 1;
     while(i<=N){

        int j = 1 ;
        int value = i;   // idhar value ko int j ke baad specify karte hai taki ye specific pattern bane
        while (j<=i){
            cout << value;
            value = value +1;
            j= j+1;
        }
        cout << endl;
        i = i+1;
     }


        // OR


    int n;
    cout << "enter the value of n: ";
    cin >> n;
    int i1= 1;
    
    while (i1<=n){
        int j1 = 1;
        
        while(j1<=i1){
            int K = i1 + j1 -1;   // WE USE A FORMULA
            cout << K;
            j1 = j1+1;
        }
        cout << endl;
        i1 = i1+1;
         
    }
*/



    // 1
    // 2 1 
    // 3 2 1
    // 4 3 2 1

    int N;
     cout<< "Enter the value of N:";

     cin >> N;
     int i = 1;
     while(i<=N){

        int j = 1 ;
        int val = i;
        while (j<=i){
            cout << val;
            val = val-1;
            j= j+1;
        }
        cout << endl;
        i = i+1;
     }


     // OR


    int n;
    cout << "enter the value of n: ";
    cin >> n;
    int i1= 1;
    
    while (i1<=n){
        int j1 = 1;
        
        while(j1<=i1){
            int K = i1 - j1 + 1;   // WE USE A FORMULA
            cout << K;
            
            j1 = j1+1;
        }
        cout << endl;
        i1 = i1+1;
         
    }




    return 0;
}