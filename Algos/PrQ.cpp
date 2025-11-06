#include<bits/stdc++.h>
using namespace std;
void explainPriority(){
    // basically sabse bada number is on top and smallest in the bottom
    // A tree is maintained inside 
     
    // MAX HEAP
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    // pq = {10,8,2,1}

    cout << pq.top() << endl; // reyurns 10

    // size, swap, empty functions same as others 

    // For Minimum Heap ---> Assign it in this way 
    // MIN HEAP
    priority_queue<int, vector<int> , greater<int>> pq2;
    pq2.push(5);
    pq2.push(0);
    pq2.emplace(3);
    // pq2 = {0,3,5}
    
    cout << pq2.top() << endl; // returns 0
}

int main(){
    explainPriority();
    return 0;
}