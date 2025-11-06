#include <bits/stdc++.h>
using namespace std;
int main(){
/*
//  1D Array

    // In an array everything has to be of same datatype
    // Array elements are stored in consecutive memoery address but we are not sure about the address of the first element. The first element is at a random memory location in cpu


    int arr[5];
    cout << "ENter the first num:";
    cin >> arr[0];
    cout << "ENter the second num:";
    cin >> arr[1];
    cout << "ENter the third num:";
    cin >> arr[2];
    cout << "ENter the fourth num:";
    cin >> arr[3];
    cout << "ENter the fifth num:";
    cin >> arr[4];

    cout << "The fourth number is :"<< arr[3] << endl;  //To give the value stored in a particular index

    arr[4] += 9;  // To update or perform any action on the specific index 
    cout << arr[4] << endl;


// 2D Array

    int arr[3][5]; // 3 = row , 5 = column
    arr[1][3] = 90;
    cout << "The value is:"<< arr[1][3] << endl;




// To work with indexing on Strings

    string S = "Shrishti";
    int len = S.size();
    cout << len << endl;
    S[len-1] = 'K';
    cout << S << endl;
    cout << S[len-1]<< endl;
    cout << S[2] << endl;
    S[4] = 'W';
    cout << S << endl;



   // To initialise arrays with a random value

   int ar[10];
   fill_n(ar,10,1);
   for (int i = 0; i <= 11; i++)
    {
       cout << ar[i] << endl;
   }


   

   //TO find Max and Min

   int getMax(int num[], int n){
    int maximum = INT_MIN;
    for(int i = 0; i < n ; i++){
        if(num[i] > maximum){
            maximum = num[i]; // Agar minimum value of int (i.e INT_MIN is lesser than the number in the particular digit in array then the value is updated to the value in array)
        }

        // Also, instead of using the if condition above, use the below predefined function:
        maximum = max(maximum, num[i]); // BUT LOOP CHALANA IS MANDATORY 

    }
    return maximum ; // Similar can be done for minimum function using min()
   }



   int getMin(int num[], int n){
    int min = INT_MAX;
    for(int i = 0; i < n ; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
   } 




   int main(){
   int size;
   cout << "Enter the size of array : ";
   cin >> size;

   int num[10000];
   for(int i = 0 ; i < size; i++){
    cout << "Enter the value of " << i+1 <<" digit : " ;
    cin >> num[i];
   }

   cout << "max value is : " << getMax(num , size) << endl;
   cout << "min value is : " << getMin(num, size) << endl;


   //PREDEFINED FUNCTIONS FOR MAX MIN


*/



   return 0;
}