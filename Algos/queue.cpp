#include<bits/stdc++.h>
using namespace std;

void explainQueue(){

    queue<int> q;
    q.push(1); // q = {1}
    q.push(2); // q = {1,2}
    q.emplace(4); // q = {1,2,4}

    q.back() += 10;  // last element pe opertaions can be performed by this 

    cout << q.back() << endl; // returns 14
    cout << q.front() << endl; // return 1

    q.pop(); // removes 1 and will not return anything 
    cout << q.front() << endl; // returns 2

    //size, swap, empty is same as stack

}

int main(){
    explainQueue();
    return 0;
}