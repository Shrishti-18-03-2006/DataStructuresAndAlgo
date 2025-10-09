#include<bits/stdc++.h>
using namespace std;

void update(int n){// pass by value 
    n++;
}
void update2(int &n){// pass by reference 
    n++;
}
/*
int& func(int a){ // It is a bad practice 
    int num = a;
    int& ans = num;
    return ans;

}
int* fun(int n){// this is also a bad practice 
    int *ptr = &n;
    return ptr;
}
int main(){
    int num = 5;
    cout << "Before " << num << endl;
    update(num);
    cout << "After " << num << endl;
    update2(num);
    cout << "After ref " << num << endl;

    return 0;
}


//Variable Size Array ---> HEAP MEMORY :- We use 'new' keyword 
// Dynamic memory allocation. Naming isn't allowed 
int getsum(int *arr, int n){
    int sum =0;
    for(int i= 0 ; i <n ; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    new char;
    char *ch = new char;  // The left side is in stack memory, uses 8 bytes(always as it is a pointer) and 
                          // The right side is in dynamic memory, uses 4 byte for int, 1 byte for char and so on

    new int;
    int *ptr = new int;

//    new int[5];
  //  int *arr = new int[5]; // Creating array in heap memory 
    // left side = 8 bytes --> static allocation
    // right side = 5 X 4 bytes = 20 bytes --> dynamic allocation
    // Total memory = 28 bytes 


    // For variable size array;
    int n;
    cout << "Enter n : ";
    cin >> n;
    int *arr = new int[n];
    cout << "Give the array input : ";
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    int ans = getsum(arr,n);
    cout << "Answer is : " << ans << endl;

    // To release the memory use : 
    delete[] arr;
    arr = nullptr;
    */
int main(){
 /*   // FOR 2D array dynamic memory allocation 
    int n;
    cout << "Enter array size : ";
    cin >> n;

    //CREATION
    int ** arr = new int *[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[n];
    }

    //INPUT 
    for(int i= 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    cout << endl;
    //OUTPUT 
    for(int i= 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
*/
    // diff row and cols :
    int row;
    int col;
    cout << "Enter the row value : ";
    cin >> row;
    cout << "Enter the column value : ";
    cin >> col;

    //Creation of the 2d array:
    int** arr = new int*[row];
    for(int i = 0; i<row; i++){
        arr[i] = new int[col];
    }

    // Taking input :
    for(int i = 0; i< row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;

    // Printing the output :
    for(int i = 0 ; i < row; i++){
        for(int j = 0 ; j < col ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // To release the memory 
    for(int i = 0; i< row; i++){
        delete [] arr[i];
    }
    
    delete []arr;

    return 0;
}