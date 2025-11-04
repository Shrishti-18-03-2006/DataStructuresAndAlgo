#include<bits/stdc++.h>
using namespace std;
int first_occ(int arr[], int size, int key){
    int start = 0, end = size-1;
    int ans = -1;
    int mid = start + ((end-start)/2);
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid +1;
        }
        else if(arr[mid] > key){
            end = mid -1;
        }
        mid = start + ((end - start)/2);
    }
    return ans;
 
}
int last_occ(int arr[], int size, int key){
    int start = 0, end = size-1;
    int ans = -1;
    int mid = start + ((end-start)/2);
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid +1;
        }
        else if(arr[mid] > key){
            end = mid -1;
        }
        mid = start + ((end - start)/2);
    }
    return ans;

}

int peak_indx(int arr[] , int size){
    int start = 0, end = size -1;
        
        while(start < end){
            int mid = start + ((end - start)/2);
            if(arr[mid] < arr[mid+1]){
                start = mid+1;
            }
            else end = mid;
            mid = start + ((end - start)/2);
        }
    return start;
}

int main(){

//    int arr1[11] = {1,2,3,3,3,3,3,3,3,3,3};
//    cout << "First occurence of 3 is at index " << first_occ(arr1,11,3) << endl;
//    cout << "Last occurence of 3 is at index " << last_occ(arr1,11,3) << endl;

//    cout << "Total number of occurences of 3 is " << (last_occ(arr1,11,3) - first_occ(arr1,11,3)) +1 << endl;


    int arr2[5] = {0,3,5,4,2};
    cout << "The index of peak element is : " << peak_indx(arr2,5) << endl;



    return 0;
}