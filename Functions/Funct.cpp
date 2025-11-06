#include <bits/stdc++.h>
using namespace std;
// functions are set of codes which perform something for you
// used to modularize the code
// increase the readability
// used to use the same code multiple times
// void -> it doesn't return anything
// return
// parameterised
// non parameterised


    int sum(int a , int b){
    int c = a+b;
    return c;
}
int main(){
    int N, n;
    cout << "Enter the first number :";
    cin >> N;
    cout << "Enter the second number :";
    cin>> n;
    cout << "The sum of two numbers is :" << sum(N,n) << endl;
    return 0;
}
// OTHER METHOD --->

// FUNCTION PROTOTYPE
//Syntax -->  dtype function_name (arguments)
//Type 1 -> int sum(int a , int b); ---> Valid
//Type 2 -> int sum(int a,b); ---> invalid
//Type 3 -> int sum(int , int); ----> valid

int sum(int , int); //----> valid

int main(){      //N1 and N2 are actual parameters
    int N1 , N2;
    cout << "Enter the first number :";
    cin >> N1;
    cout << "Enter the second number :";
    cin>> N2;
    cout << "The sum of two numbers is :" << sum(N1,N2) << endl;
    return 0;
}

int sum(int a1 , int b1){    // a and b are formal parameters
    int c1 = a1+b1;
    return c1;
}
// OTHER METHOD -->

void Sum(int a2, int b2){
int S = a2+b2;
cout << S << endl;
}
 
int main(){
    int N1, N2;
    cout << "Enter two numbers :" ;
    cin >> N1 >> N2;
    sum(N1, N2);

    return 0;

}







void printname(string name) {
    cout << "Hi, I am " << name << endl;

}
int main(){
    string name;
    cin >> name;
    printname(name);

    string name2;
    cin >> name2;
    printname(name2);

    string Name2;
    cin >> Name2;
    printname(name2);

    return 0;
}




int main(){
    int Number1, Number2;
    cout << "Enter two numbers :";
    cin >> Number1 >> Number2;
    int Minimum = min(Number1, Number2);   // SAME APPLIES WITH max() 
    cout << "The minimum of two numbers is: " << Minimum << endl;

    return 0;
}







// if - else if - else in Functions :  WE CANNNOT USE void() function for performing this type of action

int max( int a3 , int b3){
    if(a3 > b3) return a3;
    else return b3;
}
int main(){
    int n1 , n2;
    cout << "Enter two numbers :" ;
    cin >> n1 >> n2;
    int Maximum = max(n1 , n2);
    cout << "The maximum of two numbers is :" << Maximum << endl;
    return 0;
}





//Passby value ----> isko ek copy store hogi, function uss copy pe actions perform karega but kisi ek jagah woh actual value stored rahegi

void dosomething(int num){
    cout << num << endl;
    num +=1;

    cout << num << endl;
    num +=1;

    cout << num << endl;
    num +=1;
}
int main() {
    int num;
    cout << "Enter the value of a Number to do something :";
    cin >> num;
    dosomething(num);
    cout << num << endl;
    return 0;
}

void something(string S){
    S[0] = 'K';
    cout << S << endl;
}
int main(){
    string S;
    cout << "Enter a Word :" ;
    cin >> S;
    something(S);
    cout << S << endl;

    return 0;

}


//Pass by referenvce -----> unlike pass by value, isme copy generate kr ke changes krne ke badle, original values pe changes hote hai
// To do so --> just add "&" before the variable name in the function while defining it

// for eg 

void doWork(int &number1){  // HERE WE ADD THE "&" SYMBOL 
    cout << number1 << endl;
    number1 +=1;

    cout << number1 << endl;
    number1 +=1;

    cout << number1 << endl;
    number1 +=1;
}
int main() {
    int number1;
    cout << "Enter the value of a Number to do something :";
    cin >> number1;
    doWork(number1);
    cout << number1 << endl;
    return 0;
}



// arrays always go with passby reference 

void Work(int arr[], int n){ 
    arr[1]+=100;
    cout << "\nValue in function is :" << arr[1] << endl;
}

int main(){
    int n;
    cout << "ENter the value of n :";
    cin >> n;
    int arr[n];
    int i;
    for(i=0;i<=n-1;i=i+1){
        cout << "ENter number "<< i+1 << " for array :" ;
        cin >> arr[i];
    }
    cout << "\n";
    for(i=0;i<=n-1;i=i+1){
        cout << "The number " << i+1 << " for array is : " << arr[i] << endl;
    }

    Work(arr , n);
    cout << "\n" << "The value in main is :" << arr[1] << endl;



    return 0;
}
    