#include<bits/stdc++.h>
using namespace std;
// MERGE SORT --> It takes much better time complexity and is much more optimised sorting algorithm 
// divide and merge 
// Recursion is used in this 
// TC = n(log n) 
// SC = O(n)
void merger(vector<int>& arr , int low, int mid, int high){
    // This will just merge the arrays which were divided and came back sorted.
    vector<int> temporary;
    int left_start = low;
    int right_start = mid+1;
    while(left_start <= mid && right_start <= high){
        if(arr[left_start] <= arr[right_start]){
            temporary.push_back(arr[left_start]);
            left_start++;
        }
        else{
            temporary.push_back(arr[right_start]);
            right_start++;
        }
    }
    while(left_start <= mid){
        temporary.push_back(arr[left_start]);
        left_start++;
    }
    while(right_start <= high){
        temporary.push_back(arr[right_start]);
        right_start++;
    }
    for(int i = low ; i <= high ; i++){
        arr[i] = temporary[i-low];
    }
}
void mergeSort(vector<int>& arr , int low, int high){
    // This will be the recursive function 
    if(low == high) return;
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1 , high);
    merger(arr, low, mid ,high);
}
int main(){
    int n;
    cout << "Give te size of the array : ";
    cin >> n;
     vector<int> arr(n);
    cout << "Give the array input : ";
    for(int i = 0 ; i < n ; i++){
        cin  >> arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int j = 0 ; j < n ; j++){
        cout << arr[j] << " ";
    }
    cout << endl;   
    return 0;
}