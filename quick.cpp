#include<bits/stdc++.h>
using namespace std;
// QUICK SORT 
int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }
        if(i<j)swap(arr[i] , arr[j]);
    }
    swap(arr[low] , arr[j]);
    return j;
}
void qs(vector<int> &arr , int low, int high){
    if(low < high){
        int pindx = partition(arr,low,high);
        qs(arr,low,pindx-1);
        qs(arr,pindx+1,high);
    }
      
}
int main(){
    int n;
    cout << "Enter array size : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Give the array input :- ";
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    qs(arr,0,n-1);
    cout << "After sorting : ";
    for(int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
    cout << endl;


    return 0;
}