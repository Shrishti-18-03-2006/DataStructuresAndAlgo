#include<iostream>
#include<thread> // the header file 

using namespace std;

/*
Multithreading is a feature that allows two or more features to run at the same time.
Each feature, or a part of program that runs simultaneously is called a THREAD 

THREAD -> it's like a mini program inside your main program 
       -> the OS runs these threads in parallel if the cpu has multiple cores or by switching fast between them if the cpu has only 1 core
*/

void hello1(){
    for(int i = 0 ; i < 5 ; i++){
        cout << "Task of Thread 1\n";
    }
}

void hello2(){
    for(int i = 0 ; i < 5 ; i++) cout << "Task of thread 2\n";
}





int main(){
    thread t1(hello1);
    thread t2(hello2);
    
    for(int i = 0 ; i < 5 ; i++){
        cout << "Task of Main function\n";
    }

    t1.join(); // join() → Main program waits for the thread to finish
    t2.join();



    return 0;
}