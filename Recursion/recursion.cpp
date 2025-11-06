#include<bits/stdc++.h>
using namespace std;
/*
void f(){
    cout << "Hello";
    f();
}
int main(){
    f();
}

// segmentation fails = stack overflow
//the condition required is called as BASE CONDITION 
int cnt = 0;
void f(){
    if(cnt == 5) return; // The return here, terminates the function

    //here the if condition is called as the BASE CONDITION 
    cout << cnt << endl;
    cnt++;
    f();
}
int main(){
    f();
}


*/

/*
// Print a charater for n times 
void f1(int i, int n){ // here i and n are the parameters 
    if(i > n) return; // As soon as i exceeds n, the function terminates 

    cout <<"S" << " " << endl; // Till the time i is lesser than n, we execute these statements 
    f1(i+1,n);   
    // But as soon as the if statement gets true, these lines will not executed 
}
int main(){

    f1(1,5);  // here we gave the inputs for i and n 
}


// Print linearly from 1 to N

void f2(int i , int n){
    if(i > n) return ;

    cout << i << " ";
    f2(i+1, n);

}
int main(){
    f2(1,8);
}



// Print from N to 1

void f3(int i , int n){
    if(n < i) return ;

    cout << n << " ";
    f3(i,n-1);
}

int main(){
    f3(1,8);
}


// 1 to N using backtracking 
void f4(int i , int n){
    if(i<1) return;

    f4(i-1,n);
    cout << i << " " ;
}
int main(){
    f4(3,3);
}


// N to 1 using backtracking  
void f5(int i , int n){
    if(i>n) return;

    f5(i+1,n);
    cout << i << " " ;
}
int main(){
    f5(1,3);



//Sum till n using parameterised method
void f6(int i , int s){
    if(i<1){
        cout << "The sum till n is : " << s << endl;
        return ;
    }
    f6(i-1 , s+i);
}

int main(){
    f6(10,0);
}


//functiona l method to find sum till N : 

int f7(int n){
    if(n == 0) return 0;

    return n+ f7(n-1);
}
int main(){
    int n; 
    cout << "ENter the value of n : " ;
    cin >> n;
    cout << f7(n) << endl;
    return 0;
}


// Fcatorial of n using recursion 
int fact(int n){
    if(n == 0) return 1; // while returning here, we return 1 because if we return 0, then entire thing becomes 0

    return n * fact(n-1);
}
int main(){
    int number;
    cout << "Enter a number : ";
    cin >> number ;
    cout << "Factorial of the number is : " << fact(number) << endl;
    return 0;
}



// 1) Reverse an array  : Arr = [1 , 2 , 3 , 4 , 2]  :: Rev = [2 , 4 , 3 , 2 , 1]
   // recursion using two pointers

void swp(int arr[],int l = 0 , int r = -1){
    if(l >= r) return ;
    swap(arr[l] , arr[r]);
    swp(arr,l+1,r-1);
}
int main(){
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    int start = 0;
    cout << "Enter the array : ";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cout << "\nArray before reversing is : ";
    for(int i = 0 ; i < n ; i++) cout << arr[i]<< " ";
    cout << endl << endl;
    swp(arr,start,n-1);

    cout << "Array after reversing is : ";
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    return 0;
}


//Reversing the array using a single variable 
void reverse(int arr[],int l,int n){
    if(l >= n/2) return ;
    swap(arr[l], arr[n-l-1]);
    reverse(arr,l+1,n);

}
int main(){
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int a[n];
    int start = 0;
    cout << "Enter the array : ";
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    cout << "\nArray before reversing is : ";
    for(int i = 0 ; i < n ; i++) cout << a[i]<< " ";

    reverse(a,start,n);

    cout << "\nArray after reversing is : ";
    for(int i = 0 ; i < n ; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}


// Check if the entered string is palindrome(on string on reversal is the same)
//eg MADAM on reversing is MADAM
//'11211' on reversal = '11211'
bool palindrome_string(int i, string &st){
    if(i >= st.size()/2) return true ; //recursive condition
    if(st[i] != st[st.size()-i-1]) return false; //checks if the string is identical(palindrome)
    return palindrome_string(i+1,st);
}
int main(){
    string name;
    cout << "Enter a word to check if palindrome : ";
    cin >> name;
    cout << palindrome_string(0,name) << endl;
    return 0;    
}
*/

//MULTIPLE RECURSION CALLS
// The function is called multiple times -- twice or thrice or more
// 1) FIBONACCI NUMBER ----> 0 1 1 2 3 5 8 13 21 34
int fib_num(int n){
    if(n <= 1) return n;
    return fib_num(n-1)+fib_num(n-2);
}
int main(){
    int x;
    cout << "Enter a value to find xth fibonacci number :";
    cin >> x;
    cout << "The xth fibonacci number is : " << fib_num(x) << endl;
}
