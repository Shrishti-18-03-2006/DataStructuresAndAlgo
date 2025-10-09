#include <bits/stdc++.h>
using namespace std;

    //Linear Search

    bool search(int arr[] , int size , int find){

        for(int i = 0; i < size; i++){
            if(arr[i] == find){
                return 1;
            }
        }
        return 0;
    }


    int main(){

        int arr[5] = {1, 3 ,4 , 6, 9};
        //find if 3 is present in array;

        cout << "Enter the element to find: " ;
        int find;
        cin >> find;

        bool found = search(arr, 5, find);
        if(found){
            cout << "The element is present"<< endl;
        }
        else{
            cout << "The element is not present" << endl;
        }
        return 0;
    }












    //Reverse an array

    void reverse(int arr[], int size){
        int start = 0;
        int end = size-1;
        while(start <= end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void printArray(int arr[], int size){
        for(int i = 0; i < size ; i++){
            cout << arr[i] << " " ;
        }
        cout << endl;
    }

    int main(){

        int arr[6] = {1, 4, 5, 9, -2, 15};
        int brr[5] = {2, 5, 8, 1, 7};

        cout << "First Array : ";
        printArray(arr, 6);
        cout << endl;

        reverse(arr, 6);

        cout << "First Array Reversed: ";
        printArray(arr, 6);
        cout << endl;



        cout << "Second Array : ";
        printArray(brr, 5);
        cout << endl;

        reverse(brr, 5);

        cout << "Second Array Reversed: ";
        printArray(brr, 5);
        cout << endl;

        return 0;
    }



//SWAP ALTERNATE
void swap(int arr[], int size){
    for(int i = 0 ; i < size ; i += 2){
        if(i+1 < size){
          swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int size){
        for(int i = 0; i < size ; i++){
            cout << arr[i] << " " ;
        }
        cout << endl;
 }

int main(){
    int arr[6] = {2,4,3,1,7,2}; //EVEN ARRAY
    swap(arr, 6);
    cout << "Swapped alternate array is: ";
    printArray(arr, 6);
    cout << endl;

    int brr[5] = {1, 4 , 7, 3, 8}; // ODD ARRAY 
    swap(brr, 5);
    cout << "Swapped alternate array is :";
    printArray(brr, 5);
    cout << endl;

    return 0 ;
}
