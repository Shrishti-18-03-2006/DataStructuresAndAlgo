#include<bits/stdc++.h>
using namespace std;

void explainMap(){
    // stores in key value pair
    // keys must be unique but not values 
    // Their datatype can be anything 
    
    map<int , int> mp;
    mp[1] = 2;
    mp.emplace(4,5);
    mp.insert({9,10});
   /* map<int , pair<int , int> > mp1;
    mp1.emplace(90,7,2);
    map< pair<int , int> , int> mp2;
    mp2.emplace(11,9,8);
*/
    for(auto a : mp){
        cout << a.first << " " << a.second << endl;
    }

    cout << mp[1] << endl;
    cout << mp[5] << endl;

    auto it = mp.find(4);
    cout << (*it).second << endl;

    auto it2 = mp.find(5); // This will point to mp.end() , i.e just after the end of map

    // Syntax of lower and upperbound 

    auto itt = mp.lower_bound(2);
    auto itt1 = mp.upper_bound(3);

    //erase, swap, size, empty are the same as above 
}

void explainMultiMap(){
    // can store duplicate keys
}

void explainUnorderedMap(){
    // It will not store in sorted order, also will not have duplicate keys 

}

int main(){
    explainMap();
    explainMultiMap();

    return 0;
}