#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1 , pair<int,int>p2){
    if(p1.second <p2.second){
        return true;
    }
    
    if(p1.second > p2.second){
        return false;
    }

    if(p1.first >p2.first){
        return true;
    }
    return false;

}

void explainAlgo(){
    int n;

    //sort(a, a+n); // it will sort an array names a
    // sort(v.begin() , v,end());  

    // sort(a+2 , a+4);  ----> specified elements to be sorted 

    pair<int,int> a[] = {{1,2},{3,4},{5,6}};
    // now sort it according to second element in ascending order 
    // if second element is same,then sort it in descending order but according to first element 

    // use this =
    sort(a, a+n , comp);

    int num = 7;
    int cont = __builtin_popcount(num); // this will count the number of set bits in the variable num
    
    long long num2 = 6271757387;
    int cont2 = __builtin_popcountll(num2); // same as above but for long long data types 

    string s = "123";  // always keep it sorted in ascending order so as to get all the possible permutations as done below 
    do{
        cout << s << endl;
    } while(next_permutation(s.begin() , s.end()));

   // int maxim = *max_element(a,a+n);

}

int main(){

    return 0;
}