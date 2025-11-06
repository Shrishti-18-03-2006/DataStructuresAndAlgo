#include <bits/stdc++.h>
using namespace std;
int main(){

 /*  //Give number week name to corresponding number from 1 to 7

    int day;
    cout << "Enter the number for week day :";
    cin >> day;
    switch(day){
        case 1:
        cout << "Monday";
        break;

        case 2:
        cout << "Tuesday";
        break;

        case 3:
        cout << "Wednesday";
        break;

        case 4:
        cout << "Thursday";
        break;

        case 5:
        cout << "Friday";
        break;

        case 6:
        cout << "Saturday";
        break;

        case 7:
        cout << "Sunday";
        break;
        
        default:
        cout << "Invalid Number!";

    }
    cout << endl;
*/
      int A, B;
      cout << "Enter number 1 :";
      cin >> A;
      cout << "Enter number 2 :";
      cin >> B;

      char O;
      cout << "Enter the desired operation: ";
      cin >> O;

      switch(O){
        case '+':
          cout << "Addition :" << (A+B) << endl;
           break;
        case '-':
          cout << "Subtraction :" << (A-B) << endl;
           break;
        case '*':
          cout << "Multiplication :" << (A*B) << endl;
           break;
        case '/':
          cout << "Division :" << (A/B) << endl;
           break;
        case '%':
          cout << "Remainder :" << (A%B) << endl;
           break;

        default :
         cout << "Invalid Operation entered !" << endl;
      }
      






    return 0;
}