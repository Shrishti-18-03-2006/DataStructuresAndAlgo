#include<bits/stdc++.h>
using namespace std;

// 1) SELECTION SORTING
// TC = O(n^2) in base, average as well as worst case in this algorithm 
void selection_sort(int arr[], int n){
    for(int i = 0 ; i <= n-1 ; i++){
        int minimum = i,temp;
        for(int j = i ; j <= n-1 ; j++){
            if(arr[j]<arr[minimum]) minimum = j;
        }
        temp = arr[i];
        arr[i] = arr[minimum];
        arr[minimum] = temp;
    }
}
// BUBBLE SORTING 
// Best case TC = O(N) ---> if the array is sorted, we get linear time complexity 
// Worst/ avg TC = O(n^2)
void bubble_sorting(int arr[],int n){
    int swapped = 0;
    for(int i = n-1 ; i >= 0; i--){
        for(int j = 0 ; j<= i-1 ; j++ ){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0){ 
            break;
        }
    cout << "counter\n";
    }
}

// INSERTION SORTING 
// TC for worst and average case scenario is O(n^2) 
// TC for best case = O(N) --> Completely sorted array 
void ins_sort(int arr[] , int n){
    for(int i = 0 ; i <= n-1 ; i++){
         int j = i;
         while(j > 0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1]= arr[j];
            arr[j] = temp;
            j--;
         }
    }
}
int main(){
    int size;
    cout << "Enter array size : ";
    cin >> size;
    int array[size];
    cout << "Give the array input : ";
    for(int i = 0 ; i < size ; i++) cin >> array[i];
/*    cout << "Array before bubble sorting is : ";
    for(int i = 0 ; i < size ; i++) cout << array[i] << " ";
    cout << endl;*/
  //  selection_sort(array,size);
    ins_sort(array,size);
    cout << "Array after bubble sorting is : ";
    for(int i = 0 ; i < size ; i++) cout << array[i] << " ";
    cout << endl;
    return 0;
}