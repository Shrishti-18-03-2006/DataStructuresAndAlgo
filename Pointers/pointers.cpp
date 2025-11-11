#include<bits/stdc++.h>
using namespace std;

int main(){
/*
    int n = 10;
    cout << "Number is : " << n;
    // Address of n --> &n
    cout << "\nAddress of " << n << " is " << &n << endl; // this address is in hexadecimal format 
    // POINTER --> Stores the address 
    int *pt = &n;
    cout << "The pointer : " <<  pt << endl;
    // Always initialize a pointer. 
    // printing n and *pt =>    both will give same result ---> n = *pt 
    cout << "The value of is : " << *pt << endl; 
    cout << "The number is : " << n << endl; 
    

    //Copying a pointer -->
    int *pt2 = pt;
    cout << pt2 <<" - " << pt << endl;
    cout << *pt2 << " - " << *pt << endl;

    pt = pt+1;
    cout << pt << endl;  // this will send it to next location as per the data type (=4 in case of int, +1 in case of char, +8 in case double and so on)
    cout << pt2 << endl; // But this pt2 is same as it is the copy of the pt pointer 


    // Arrays 
    int arr[3] = {2,5,6};
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << *arr << endl;
    cout << *arr+1 << " = " << *(arr)+1 << endl;
    cout << *(arr+1) << endl;
    // arr[i] = *(arr+i) --> internally 
    // OR ----> i[arr] = *(i+arr) --> Both are same
    cout << 2[arr] << " = " << *(2+arr) << endl;
    // a pointer always has the size as 8 bytes . While the array will have the size of 4*size of array 


    //data in symbol table cannot be changed 
    int a[10];
  //  a = a +1;  // will not work

    cout << &a[0] << endl;
    int *ptr = &a[0];
    cout << ptr << endl;
    cout << &ptr << endl;
    ptr = ptr+1;
    cout << &ptr << endl;
    cout << ptr << endl;



    char ch[10] = "abcdefghi" ;
    cout << ch << endl; // this will print the entire array and not the address of the first element of the array 
    char *c = &ch[0];
    cout << c << endl; // this will print the entire array again 
    cout << *c << endl; // this will give the first element of the array 

    char temp = 'z';
    char *p = &temp;
    cout << p << endl; // it will go on till it doesn't get any null character 
    char chh[6] = "abcdf";
    char *c2 = "abcde";  // never do this 
*/
    
    
      int myNumbers[5] = {10, 20, 30, 40, 50};
      int *start = &myNumbers[1]; // points to 20
      int *end = &myNumbers[4];   // points to 50

      cout << end - start << endl; // 3 elements apart



    return 0;
}