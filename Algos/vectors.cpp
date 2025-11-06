#include<bits/stdc++.h>
using namespace std;
/*
void explainVector(){
    // Vector is a container which is dynamic in nature - we can always increase the size when we need to
    // DECLARING A VETOR
    vector<int> s;
    s.push_back(1);  // {_} = {1} empty container gets 1
    s.emplace_back(2); // = {1,2} -> Dynamically increases the size and inserts 2 at the end [it's similar to push back]
    s.emplace_back(4);
    s.emplace_back(6);
    s.emplace_back(8);
    // s = {1, 2, 4, 6, 8}

    vector<pair<int, int>>shri;
    shri.push_back({3,4});
    shri.emplace_back(5,2);

    vector<int> V(5,100); // 5 is size and 100 is stored 5 times = {100, 100, 100, 100, 100}

    vector<int> v(5); // contain garbage value 

    vector<int> L(5, 20); // = {20, 20, 20, 20, 20}
    vector<int> L2(L); // = Here L2 gets the value of L, i.e the elements of L gets also stored in L2

    // TO ACCESS ELEMNTS IN A VECTOR
    // 1) 
    cout << V[0] << endl;
    cout << V.at(1) << endl;

    // 2) using Iterators --> It points to the memory address and to access the element in the address we use = *(_)
    vector<int>::iterator it = s.begin(); // 1st element 
    it++;
    cout << *(it) << endl;

    vector<int>::iterator xyz = s.end(); // end will point to somewhere right after after the end element
    vector<int>::iterator xyz = s.rend(); 
    vector<int>::iterator xyz = s.rbegin(); 

    cout << s.back() << endl;

    // To access the entire vector: 
    //1) 
    for(vector<int>::iterator pqr = s.begin() ; pqr != s.end() ; pqr++){
        cout << *(pqr) << " ";
    }

    cout << endl;

    // 2)
    // Replace "vector<int>::iterator" with "auto"
    for(auto pqr = s.begin() ; pqr != s.end() ; pqr++){
        cout << *(pqr) << " ";
    }

    cout << endl;

    // 3) Using for each loop
    for(auto pqr : s){
        cout << pqr << " ";
    }

    cout << endl;






    // Deleting in Vectors
    // s = {1, 2, 4, 6, 8}
//   s.erase(s.begin()); // Removes the first element 


//   s.erase(s.begin()+1); // removes 2nd element 

    s.erase(s.begin() , s.begin()+3); // works just like python, (start, end{excluding the last one})
    for(auto pqr : s){
        cout << pqr << " ";
    }

    //INSERT Function
    vector<int>v(2,100);
    v.insert(v.begin(),300);  // This inserts 300 right at the beginning 
    v.insert(v.begin()+1 , 2, 10);  // {300, 10, 10, 100, 100}

    vector<int> copy(2,50);
    v.insert(v.begin(), copy.begin() , copy.end()); // inserts the "copy" named vector in vector v

    cout << v.size(); // Size of the vector, i.e the number of elements in it 
    v.pop_back(); // will remove the last element 

    // v1 = {10, 20}
    // v2 = {30, 40}
   // v1.swap(v2); // v1 --> {30, 40}    v2 --> {10, 20}

    v.clear(); //trims it down to an empty vector
    cout << v.empty(); // Will return true if its empty and false if not empty. 

}

*/
int main(){
    //explainPair();
   // explainVector();
}