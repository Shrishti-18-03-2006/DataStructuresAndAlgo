#include <bits/stdc++.h>
using namespace std;
int main() { 


 /*
    /cout << i << " " << j << " " ;g if else 

    int N;
    cout << "Enter your number :";
    cin >> N ;

    if ( N%2 == 0) {
        cout << "It is an even number\n";
    } else {
        cout << "It is an odd number\n";
    }


    //Q2) a>b or b>a conditional question

    int a, b;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    if (a>b){
        cout << "The answer is A"<< endl;
    } else {
        cout << "The answer is B" << endl;
    }


    //Q3) A number is +ve , -ve , zero 
    int K ;
    cout << "enter the value of K :" ;
    cin >> K;
    if (K>0){
        cout << "K is +ve. \n";
    } else if (K<0) {
        cout << "K is -ve. \n";
    } else {
        cout << " K is Zero. \n";
    } 
    




    //Q4) To print the Sum of N numbers
    int N ;
    cout << "Enter the value of N :";
    cin >> N;
    int i = 1;
    int sum = 0; // sum shuru mein humesha zero hota hai


    while (i<=N){
       sum = sum+i;
       i=i+1;
    }

    cout << "Value of sum is:" << sum;



    //Q5) Prime numbers --> using while loop

    int B, I=2;
    cout << "ENter the number you want to check :";
    cin >> B;
    while(I<B){ //While ke bracket mein whi condition likhenge jisme specify ho ki rukna kab hai
        if (B%I == 0) {
            cout << "It is not a prime number."<< endl;
        }
        else{
            cout<< "It is a prime number"<< endl;
        }
        I=I+1;
        
    }




   int N;
   int i = 2;
   cout << "Enter the value of N: " ;
   cin >> N;

   bool Value = 1; // SHURU MEIN HUMNE MAAN LIYA KI YE TRUE HAI

   for(; i<N ; i++){
    if(N%i ==0){
        Value == 0; //IDHAR DIVISIBLE HUA SO IT IS UPDATED TO 0
        break;
    }
   }

   
   if(Value == 0){
    cout << "Not a prime number!" << endl;
   }
   else{
    cout << "A Prime Number." << endl;
   }



   


*/

   // To Print a +ve integer in it's binary format 

   int N;
   cout << "ENter a number in integer : ";
   cin >> N;
   int answer = 0;
   int i = 0;


   for( ;  N!=0;   N= N>>1 ,i++){
    int bit = N & 1;
    answer = (pow(10,i)*bit)+answer;
   }
   cout << "Binary respresentation is : " <<  answer << endl;

   



    return 0;

}