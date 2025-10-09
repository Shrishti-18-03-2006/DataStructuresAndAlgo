#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "ENter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "GIve the array input : ";
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    
    // THE PRECOMPUTATION 
    int hash[13] = {0};
    for(int i = 0 ; i < n ; i++){
        hash[arr[i]]++;
    }

    int q;
    cout << "Give the total number of queries : ";
    cin >> q;
    while(q--){
        int number ;
        cout << "Enter the number you want to count : ";
        cin >> number ;
        // FETCH 
        cout << hash[number] << endl;
    }

    return 0;
}


//GLOBALLY DECLARATION OF HASH (int)

int hashh[10000000]; // We globally decalred it with 10^7 
int main(){
    int n;
    cout << "ENter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "GIve the array input : ";
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    
    // THE PRECOMPUTATION 
    for(int i = 0 ; i < n ; i++){
        hashh[arr[i]]++;
    }

    int q;
    cout << "Give the total number of queries : ";
    cin >> q;
    while(q--){
        int number ;
        cout << "Enter the number you want to count : ";
        cin >> number ;
        // FETCH 
        cout << hashh[number] << endl;
    }

    return 0;
}


//Character Hashing 
// s = "a b c d a b e f c" ----> same concept applies here 
// we can hash them into arrays as well
// WE CAN TAKE an array --> arr[256]
//ASCII a-z = 97-122 
// To get the corresponding index = 'char'-'a'

// 1) for lower case letter :-
int main(){
    string s;
    cout << "Enter a string : ";
    cin >> s;

    // Pre compute 
    int hash[26]={0};
    for(int i = 0; i < s.size() ; i++){
        hash[s[i]-'a']++;  // THIS WILL GIVE US THE INDEX OF THE CHARACTER IN THE ARRAY 
    }
    int q;
    cout <<"Enter the number of queries : ";
    cin >> q;
    while(q--){
        char ch;
        cout << "Enter a character to find how many times its rep : ";
        cin >> ch; 
        // Fetching 
        cout << hash[ch-'a'] << endl;

    }
    return 0;
}

//2) For all 256 characters :-
int main(){
    string s;
    cout << "Enter a string : ";
    cin >> s;

    // Pre compute 
    int hash[256]={0};
    for(int i = 0; i < s.size() ; i++){
        hash[s[i]]++;  // THIS WILL GIVE US THE INDEX OF THE CHARACTER IN THE ARRAY 
    }
    int q;
    cout <<"Enter the number of queries : ";
    cin >> q;
    while(q--){
        char ch;
        cout << "Enter a character to find how many times its rep : ";
        cin >> ch; 
        // Fetching 
        cout << hash[ch] << endl;

    }
    return 0;
}
// char-'a' ---> LOWER CASE CHARACTERS 
// char-'A' ---> UPPER CASE CHARACTERS
// char-'1' ---> FOR NUMERIC CHARACTERS


//MAP HASHING 
// CPP STL --> map and unordered maps will be used to store larger data as in arrays, we can't store more than 10^8 at max
// KEY = Number 
// VALUE = Frequency 
// mpp[arr[i]]++
int main(){
    int n;
    cout << "ENter the size of map :";
    cin >> n;
    int arr[n];
    map<int , int> mpp;
    cout << "Enter the elements of the array : ";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        //PRECOMPUTATION : 
        mpp[arr[i]]++;
    }

    int q;
    cout << "ENter the number of queries : ";
    cin >> q;
    
    while(q--){
        int number;
        cout << "Enter the frequency of a number you want to check : ";
        cin >> number;
        
        // Fetching : 
        cout << mpp[number] << endl;

    }

    return 0;
}


// MAP CHARACTER HASHING :
// map<char,int> mpp ----> Here the character will not be converted to an integer.



// TIME COMPLEXITY FOR MAPS 
// In all cases it takes log(n) as time complexity, where n = number of elements of map

// Unordered map ---> It just doesn't have any order unlike map
// ADVANTAGE : when we are storing and fetching, the avg and const time complexity is avg. TC = O(1) for all stroing and fetching 
// The worst case : TC = O(N), where N = no of elemenets in map 
// USE UNORDERED MAP . If it exceeds the time loimit, use maps because in case of worst case, maps work better as they have TC = log(n) in all cases
// Why the worst case happens? Because of internal collisions
// How is the internal map designed ? 
// division, folding, mid square 
// DIVISION METHOD : When size of array is restricted 
// e.g if the size restriction is 10 and given array = [2,5,16,28,139]
// we do arr[i]%10 and stroe in the given 10 sized array 
// if on %10, we have the same number then the collision factor comes 
// chained in sorted order so we can find the same numbers 
// all keys end up at the same hash . This is when the worst case happens and TC = O(N)
// pairs can not be a key in unordered map 


int main(){
    int n;
    cout << "Enter the size of map :";
    cin >> n;
    int arr[n];
    unordered_map<int , int> mpp;
    cout << "Enter the elements of the array : ";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        //PRECOMPUTATION : 
        mpp[arr[i]]++;
    }

    int q;
    cout << "Enter the number of queries : ";
    cin >> q;
    
    while(q--){
        int number;
        cout << "Enter the frequency of a number you want to check : ";
        cin >> number;
        
        // Fetching : 
        cout << mpp[number] << endl;

    }

    return 0;
}



   
