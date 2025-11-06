#include <bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int , int>p = {1, 3};
    cout << p.first << p.second;
    cout << endl;

    pair<int, pair<int, int>>K = {1, {4,6}};
    cout << K.first << " " << K.second.first << " " <<K.second.second << endl;

    pair<int, int>arr[]= {{1,2},{6,7},{3,6},{2,9}};
    cout << arr[1].second << endl;
}


int main(){
    explainPair();
    
}