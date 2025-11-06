#include<bits/stdc++.h>
using namespace std;

void explainStack(){
    // Stack is LIFO = Last In First Out 
    // indexing is not allowed 
    // only 3 functions in stack = push, pop, top

    stack<int> st;
    st.push(1); // st = {1}
    st.push(2); // st = {2,1}
    st.push(3); // st = {3,2,1}
    st.push(4); // st = {4,3,2,1}
    st.emplace(5); // st = {5,4,3,2,1}

    cout << st.top() << endl; // returns 5

    st.pop(); // removes the element that went in last , i.e 5 will be removed

    cout << st.top() << endl; // returns 4
    cout << st.size() << endl; // returns the size of the stack , i.e 4
    cout << st.empty() << endl; // returns False , i.e 0 if the stack is not empty and returns true , i.e 1  if the stack is empty

    stack<int> s1, s2; 
    s1.swap(s2); // it just swaps the two stacks

}

int main(){

    explainStack();

    return 0;
}
