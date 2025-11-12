#include<bits/stdc++.h>
using namespace std;
class Padd_ing{
    //random data types squence
    //takes up more memory
    char c;
    int i;
    short s;
    double d;

};
class Greedy_Align{
    // decreasing order of the data types
    // takes up lesser memory as compared to above padding
    double d;
    int i;
    short s;
    char c;

};
int main(){
    Padd_ing P1;
    cout << "Size (Padding) is : " << sizeof(P1) << endl; // Will give output as 24
    Greedy_Align G1;
    cout << "Size (Greedy Alignment) is : " << sizeof(G1) <<endl; // Will give output as 16

}