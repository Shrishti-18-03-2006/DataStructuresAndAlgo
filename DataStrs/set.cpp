#include<bits/stdc++.h>
using namespace std;


void explainSet(){
    // Stores everything in sorted order 
    // stores only unique, no repeated things 
    //not linear, it is a tree
    // in set, everything happens in logarathmic time complexity 
     
    set<int> s;
    s.insert(1);
    s.emplace(2);
    s.emplace(3);
    s.insert(2);
    s.insert(5);
    s.insert(0);
    // s = {0,1,2,3,5}

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap are the same as those of above 

    auto it = s.find(3); // Will return an iterator (memory address)

    auto it = s.find(7); // If an element is not present in the set, it will point to s.end() , i.e just after the end of the set 

    s.erase(5); // removes 5 out of the set and maintains the sorted order 

    int cont = s.count(1); // here will return 1 if the element is there and will return 0 if the element is not pnt 

    auto it1 = s.find(2);
    auto it2 = s.find(1);
    s.erase(it1,it2); // (start, end) here also, end is exclusive so 4 will not be included 

    // lower_bound() & upper_bound()

}

void explainMultiset(){
    // can store same elements unlike set , rest everything is same as sets 

    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(4);


    // ms = {1,2,2,2,3,4,4}


    int cont = ms.count(4); // This actually counts the number of elements as given in the bracket 

   // ms.erase(2); // This will erase all the 2s in the set

   // ms.erase(ms.find(2)); // This will erase only one of the 2 out of all the multiple ones stored in the set 

   // ms.erase(ms.find(2) , ms.find(2)+ 2); // THIS IS THE WRONG APPROACH 

   auto itt1 = ms.find(2); // first occurance of 2 
   auto itt2 = next(itt1 , 4); // moves the iterator to fourth occurance of 2 

   ms . erase(itt1, itt2); // 

   // ms = {1,4,4}

   for(auto P : ms){
    cout << P << " ";
   }
   cout << endl;

}

void explainUnSet(){

    unordered_set<int> us;
    // does not store it in any sorted order 
    // it will just have unique elements 
    // everything is the same as set 
    // lower_bound() and upper_bound() do not work 
    // 

}

int main(){

    //explainSet();
    //explainMultiset();

    return 0;
}