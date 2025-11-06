#include<bits/stdc++.h>
using namespace std;

void explainList(){
    // List gives us front operations as well

    list<int> l;

    l.push_back(2); // l = {2}
    l.emplace_back(5); // l = {2, 5}

    l.push_front(9); // l = {9, 2, 5}
    l.emplace_front(10); // l = {10, 9, 2, 5}

    //To Print a list
    for(auto a : l){
        cout << a << " ";
    }
    cout << endl;

    // Rest all the functions are same as vector 
    // begin, end, rebegin, rend, clear, insert, size, swap

}


void explainDeque(){

    deque<int> dq;

    dq.push_back(10); // dq = {10}
    dq.emplace_back(20); // dq = {10, 20}
    dq.push_front(5); // dq = {5, 10, 20}
    dq.emplace_front(0); // dq = {0, 5, 10, 20}

    dq.pop_back(); // Will remove the last element dq = {0, 5, 10}
    dq.pop_front(); // dq = {5, 10}

//    dq.back();
  //  dq.front();

    for(auto X : dq){
        cout << X << " ";
    }
    cout << endl;

    // Rest all same as vectors 

}


int main(){
    explainList();
    explainDeque();
    return 0;
}
