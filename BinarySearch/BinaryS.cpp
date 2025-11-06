#include<bits/stdc++.h>
using namespace std;
int BSearch(int arr[] , int size , int key){
    int start = 0;
    int end = size-1;
    int mid = start+((end-start)/2);
    
    while(start <= end){
        if(arr[mid] == key) return mid;

        if(key> arr[mid]) start = mid+1; // Go to right part 

        else end = mid -1; // Go to the left part 

        mid = start+((end-start)/2); // keep updating the mid as well, after updating start or end
    }
    return -1; // Element not found 
}
int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {1,3,5,7,9};

    int indx = BSearch(even, 6, 12);
    cout << "Index of 12 is : " << indx << endl;

    int oInd = BSearch(odd,5,1);
    cout << "Index of 1 is : " << oInd << endl;
    return 0;
}

// Reason to use Binary Search? 
/*

if we have sorted array of 1000 elements, 
it reduces to half its elements 
500 --> 250 --> 125 --> 62 --> 31 --> 15 --> 7 --> 3 --> 1 --> 0

so in total only 10 comparisions were done for an array of 1000 elements 

So the time complexity = O(log n)
 How we got log n?
 n --> n/2 --> n/4 --> n/8 ......... --> n/(2^k) 
 so, 
 n/(2^k) = 1, <=> n = 2^k,
 therefore, k = log n

*/