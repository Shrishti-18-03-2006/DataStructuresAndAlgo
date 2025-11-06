#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    int n;
    cout << "Enter the value of n : " ;
    cin >> n;

        int counts = 0;
        int number = n;
        int temporary_n = n; 
        int sum = 0;
        while(n>0){
            int digit = n%10;
            while(temporary_n > 0){ // this temporary variable is used so that we can count all the digits 
                counts++;
                temporary_n = temporary_n /10;
            }
            sum = pow(digit,counts) + sum;
            n = n/10;
        }
        if(sum == number){
            cout << "Armstrong Number" << endl;
        }
        else{
            cout << "Not an Armstrong Number" << endl;
        }

    int n;
    cout << "Enter the number : ";
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        if(n%i == 0){
            cout << i << " ";
        }
    }
    cout << endl;


    // To find divisors using vectors
    vector<int> divisors;
    int n;
    cout << "Enter n : ";
    cin >> n;
        for(int i = 1 ; i <= sqrt(n) ; i++){
            if(n%i == 0){
                divisors.push_back(i);
                if((n/i)!=i){
                    divisors.push_back(n/i);
                }
            }
            sort(divisors.begin() , divisors.end());
        }
        for(int x : divisors){
                cout << x << " ";
        }
    cout << endl;


    // Prime Number 
    int num ;
    cout << "Enter the number to check :" ;
    cin >> num;
    int counter = 0;
    for(int i = 1 ; i <= sqrt(num) ; i++){
            if(num%i == 0){
                counter++;
                if((num/i)!=i){
                    counter++;
                }
            }
    }
    if(counter == 2){
        cout << "Prime Number." << endl;
    }
    else{
        cout << "Not a Prime Number." << endl;
    }
    

    int N1,N2;
    cout << "Enter the value of First Number: ";
    cin >> N1;
    cout << "Enter the value of Second Number: ";
    cin >> N2;
    int Hcf = 1;
    for(int i = 1 ; i <= min(N1,N2) ; i++){
        if(N1 % i == 0 && N2 % i == 0){
            Hcf = i;
        }
    }
    cout << Hcf << endl;

    

    int num1, num2;
    cout << "Enter First number : ";
    cin >> num1;
    cout << "ENter Second number : ";
    cin >> num2;
    while(num1>0 && num2>0){
        if(num1 > num2) num1%=num2;
        else num2%=num1;
    }
    if(num1 == 0) cout << "GCD is : " << num2 << endl;
    else cout << "GCD is : " << num1 << endl;


    // Time pass
   string A = "CGPA acchi karunga";
   string B = "Chud Gye guru";
   for(int i = A.length() ; i >= 1 ; i--, A.pop_back()){
    cout << A << endl;
   }

   for(int j = 1 ; j <B.length() ; j++){
    cout << B.substr(0,j+1) << endl;
   }

*/



    return 0;
}