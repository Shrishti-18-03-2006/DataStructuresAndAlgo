#include <bits/stdc++.h> 
using namespace std;
int main(){

    //For (*)
    int n;
    cout << "Enter the value for n :";
    cin >> n;
    int i = 1;

    while (i<=n){
        int j = 1;

        while(j<=n){
            cout << "*";
            j=j+1;
        }
        cout << "\n";
        i=i+1;
    }

    cout << "\n\n";


    // For number pattern
    int K;
    cout << "Enter the value for K :";
    cin >> K;
    int I = 1;

    while (I<=K){
        int L = 1;

        while(L<=K){
            cout << I;
            L=L+1;
        }
        cout << "\n";
        I=I+1;
    }

    return 0;
}