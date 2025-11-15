#include<iostream>
#include<thread>

using namespace std;

/*
🍕 1. Concurrency (Concept)
Concurrency means handling multiple tasks at the same time by:
switching between them fast, or
actually running them in parallel (if hardware allows)
It is a general idea.
👉 Outputs can be mixed because the CPU switches tasks unpredictably.


🧵 2. Multithreading (Technique)
Multithreading is one method to achieve concurrency.
Two or more threads run
OS schedules them
They interleave
Output gets mixed
👉 Mixed output happens because the threads are concurrent.
*/



void task1(){
    for(int i = 0; i < 3 ; i++) cout << "Inside task1 \n";
}

void task2(){
    for(int i =0 ; i < 3 ; i++) cout << "Inside task2 \n";
}

int main(){

    thread t1(task1);
    thread t2(task2);

    t1.join();
    t2.join();


    return 0;
}