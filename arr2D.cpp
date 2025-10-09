#include<bits/stdc++.h>
using namespace std;
bool isPresent(int arr[][4], int target, int row, int column){
    for(int i = 0; i< row; i++){
        for(int j = 0; j< column; j++){
            if (arr[i][j] == target) return true;
        }
    }
    return false;
}
void printSum(int arr[][4], int row, int column){
    cout << "Printing the sum ---> \n";
    int sum= 0;
    for(int i = 0; i< row; i++){
        for(int j = 0; j< column; j++){
            sum += arr[i][j];
        }
        cout << "Sum of row " << i+1 << " is : " << sum << endl;
    }
    cout << endl;
}
void largestRowsum(int arr[][4],int row,int column){
    int maxi = INT_MIN;
    int r = -1;
    int sum= 0;
    for(int i = 0; i< row; i++){
        for(int j = 0; j< column; j++){
            sum += arr[i][j];
        }
        if(sum > maxi) {
            maxi = sum;
            r = i+1;
        }
    }
    cout << "The maximum sum is : " << maxi << endl;
    cout << "The row with max sum is : " << r<< endl;
    cout << endl;
}
int main(){
 /*   // 1) Creation --> In the memory it is stored in a linear format only
    int arr[3][3];
    //INPUT :-
    cout << "Give the array input : ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j< 3; j++){
            cin >> arr[i][j];
        }
    }

    //OUTPUT :-
    cout << "The matrix : \n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j< 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Give the array input for col wise entry : ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j< 3; j++){
            cin >> arr[j][i];
        }
    }

    cout << "The matrix for column wise entry is : \n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j< 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int arr2[3][4]= {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
     for(int i = 0; i < 3; i++){
        for(int j = 0; j< 4; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }


    int arr[3][4];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j< 4; j++){
            cin >> arr[i][j];
        }
    }
    cout << "ENter the element to search : ";
    int target ;
    cin >> target;

    if(isPresent(arr,target,3,4)){
        cout << "Element found ." << endl;
    }
    else{
        cout << "Not Found ." << endl;
    }


*/
   /* int arr[3][4];
    cout << "Give the array input : ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j< 4; j++){
            cin >> arr[i][j];
        }
    }    
    cout << "The Output : \n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j< 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 

   // printSum(arr,3,4);
   largestRowsum(arr,3,4);
   */

   // PRINT ARRAY IN WAVE PATTERN: 
   





















    return 0;
}
