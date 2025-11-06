#include <bits/stdc++.h>
using namespace std;
int main(){
/*
    // A A A
    // B B B
    // C C C


    int N ;
    cout << "Enter N: ";
    cin >> N;

    int i = 1;
    int A = 65;
    while (i<=N){
        int j =1;
        
        while (j<= N){
            char K = A;
            cout << K;
            j = j +1;
        }
        A = A+1;
        cout << endl;
        i = i +1;     
    }


    // A B C
    // A B C
    // A B C

    int N ;
    cout << "Enter the value of N: ";
    cin >> N;

    int i = 1;
    while (i<= N){
        int j = 1;
        int A = 65;
        while (j <= N){
            char K = A;
            cout << K;
            A = A+1;
            j = j+1;
        }
        cout << endl;
        i = i+1;

    }


    // A B C 
    // D E F
    // G H I 

    int N;
    cout << "enter N: ";
    cin >> N;
    int i = 1;
    int k = 65;
    while (i <= N){
        int j = 1;
        while (j <= N){
            char P = k;
            cout << P;
            j = j +1;
            k = k +1;
        }
        cout << endl;
        i = i+1;
        
    }



    // A B C
    // B C D 
    // C D E

    int N ;
    cout << "Enter the value of N: ";
    cin >> N;
    int i = 1;
    char K = 'A';
    while (i <= N){
        int j = 1;
        while (j <= N){
            cout << K;
            K = K+1;
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }



    // A
    // B B 
    // C C C

    int N;
    cout << "Enter the value of N:" ;
    cin >> N;
    int i = 1;
    char K = 'A';
    while (i<=N){
        int j = 1;
        while (j<=i){
            cout << K;
            j = j +1;
        }
        cout << endl;
        K = K +1;
        i = i+1;
    }


    // A
    // B C 
    // D E F
    // G H I J
    int N;
    cout << "enter N: ";
    cin >> N;
    int i = 1;
    int k = 65;
    while (i <= N){
        int j = 1;
        while (j <= i){
            char P = k;
            cout << P;
            j = j +1;
            k = k +1;
        }
        cout << endl;
        i = i+1;
        
    }

 

    // A
    // B C
    // C D E
    // D E F G

    int N ;
    cout << "Enter the value of N: ";
    cin >> N;
    int i = 1;
    while (i <= N){
        int j = 1;
        while (j <= i){
            char P = 'A' + i + j -2 ;
            cout << P;
            P = P+1;
            j = j+1;
        }
        cout << endl;
        i = i+1;


    }





    // D 
    // C D 
    // B C D
    // A B C D

    int N ;
    cout << "ENter N: ";
    cin >> N;
    int i = 1;
    while (i<=N){
        int j = 1;
        while (j<= i){

            char K = 'D' - i + j;
            cout << K;
            K = K - 1;
            j = j +1;
        }

        cout << endl;
        i = i +1;
    }



    //     *
    //    **
    //   ***
    //  ****
    // *****


    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    int i = 1;
    while(i <= N){

        int space = N -i;
        while(space){
        cout << " " ;
        space --;
        }
        int j = 1;
        while(j <= i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }


    // * * * *
    // * * *
    // * * 
    // *

    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    int i = 1;
    while(i <= N){

        int star = N-i+1;
        while(star){
        cout << "*" ;
        star--;
        }
        int j = 1;
        while(j <= i){
            j++;
        }
        cout << endl;
        i++;
    }




    // * * * *
    //   * * * 
    //     * * 
    //       *

    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    int i = 1;
    while(i <= N){
        int j = 1;
        int space = i-1;
             while(space){
                cout << " " ;
                space--;
            } 
        while(j <= N-i+1){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }



    // 1 1 1 1 
    //   2 2 2 
    //     3 3 
    //       4

    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    int i = 1;
    while(i <= N){
        int j = 1;
        int space = i-1;
             while(space){
                cout << " " ;
                space--;
            } 
        while(j <= N-i+1){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }


    

    //       1
    //     2 2 
    //   3 3 3 
    // 4 4 4 4 

    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    int i = 1;
    while(i <= N){

        int space = N -i;
        while(space){
        cout << " " ;
        space --;
        }
        int j = 1;
        while(j <= i){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }


    // 1 2 3 4
    //   2 3 4 
    //     3 4 
    //       4

     int N;
    cout << "Enter the value of N: ";
    cin >> N;
    int i = 1;
    while(i <= N){
        int j = 1;
        int Num = i;
        int space = i-1;
             while(space){
                cout << " " ;
                space--;
            } 
            while(j <= N-i+1){
                cout << Num;
                Num++;
                j++;
            }
        cout << endl;
        i++;
    }




    //        1
    //      2 3
    //    4 5 6
    // 7 8 9 10

    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    int i = 1;
    int Num = 1;
    while(i <= N){

        int space = N -i;
        while(space){
        cout << "  " ;
        space --;
        }
        int j = 1;
        while(j <= i){
            cout << Num << " ";
            Num++;
            j++;
        }
        cout << endl;
        i++;
    }


    //       1
    //     1 2 1 
    //   1 2 3 2 1 
    // 1 2 3 4 3 2 1 

    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    int i = 1;
    while(i <= N){

        //pehle print karo left side wala space
        int space = N-i;
        while(space){
            cout << "  ";
            space --;
        }

        //phir print karo 1st triangle
        
        int j = 1;
        while(j <= i){
            cout << j << " ";
            j++;
        }

        // phir print karo 2nd triangle

        int K = i-1;
        while(K){
            cout << K << " ";
            K--;
        }

        cout << endl;
        i++;

    }

*/

    // 1 2 3 4 5 5 4 3 2 1 
    // 1 2 3 4 * * 4 3 2 1
    // 1 2 3 * * * * 3 2 1
    // 1 2 * * * * * * 2 1
    // 1 * * * * * * * * 1

    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    int i = 1;
    while (i <= N){

        // Triangle 1 - 12345
        int j = 1;
        while(j<= N-i+1){
            cout << j << "  ";
            j++;
        }

        // Triangle 2 - *
        int star = (i-1)*2;
        while(star){
            cout << "*" << "  ";
            star--;
        }
        // Triangle 3 - 54321
        int j2 = N-i+1;
        while(j2){
            cout<< j2 << "  ";
            j2--; 
        }

    cout << endl;
    i++;
    }
    
    // I MADE CHANGES AGAIN!! 
    return 0;
}