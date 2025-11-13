#include<bits/stdc++.h>
using namespace std;

/*
✅ Operators You CAN Overload

These operators can be overloaded:

Arithmetic Operators
    +
    -
    *
    /
    %

Unary Operators
    + (unary plus)
    - (unary minus)
    ++
    --
    !
    ~

Assignment Operators
    =
    +=
    -=
    *=
    /=
    %=
    >>=
    <<=
    &=
    ^=
    |=

Comparison / Relational Operators
    ==
    !=
    >
    <
    >=
    <=

Logical Operators
    &&
    ||

Bitwise Operators
    &
    |
    ^
    <<
    >>

Special Operators
    [] (subscript)
    () (function call)
    -> (member access through pointer)
    ->*
    * (dereference)
    & (address-of)
    , (comma)
    new
    new[]
    delete
    delete[]
    Stream Operators
    << (insertion)
    >> (extraction)
*/

// Syntax for operator overloading : 
//      return_type operator <Operator_symbol>(){
//
//      }

class A{

    public:
        int a;
        int b;

        void operator+ (A &object){
         /*   int value1 = this->a;
            int value2 = object.a;
            cout << "Output : " << value2-value1 << endl;*/
            cout << "Helloooo!!" << endl;
        }

};

int main(){
    A firstOBJ;
    A secondOBJ;
    firstOBJ.a = 4;
    secondOBJ.a = 10;
    firstOBJ + secondOBJ;

    return 0;
}
