#include <bits/stdc++.h>
using namespace std;
int main(){


/*
    //Sum of N numbers 
    int N;
    cout << "Enter the number : ";
    cin >> N;
    int sum = 0;
    int i;
    for( i=1; i<=N ; i++){
        sum+=i;
    }
    cout << "The sum is : " << sum << endl; ;

*/

    // Fibonacci Series

    int N ;
    cout << "Enter the Number : ";
    cin >> N;

    int a;
    int i = 0;
    int j= 1;
    cout << i << " " << j << " " ;
    for(a=0; a<=N; a++ ){

        int sum = i+j;
        cout << sum << " " ;
        i = j;
        j = sum;

    }
    















    return 0;
}

