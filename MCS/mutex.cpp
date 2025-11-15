#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

/*
Only one thread can enter the protected section at a time.
Think of it like a bathroom lock:
    If one thread is inside → locked
    Others wait outside
*/

int counter = 0;
mutex m;
int numbering = 0;

void work() {
    for(int i = 0; i < 1000; i++) {
        m.lock();       // lock the room
        counter++;      // safe
        m.unlock();     // leave the room
    }
}

void work2() {
    for(int i = 0; i < 1000; i++) {
        lock_guard<mutex> lg(m); // lock + unlock automatically
        numbering++;
    }

    /*
    3️⃣ unique_lock

        More flexible version of lock_guard, supports:
        manual lock/unlock
        timeouts
        condition_variable

        Example : Just replace it 
            unique_lock<mutex> ul(m);
            counter++;
            ul.unlock();

    */


}


int main() {
    thread t1(work);
    thread t2(work);

    t1.join();
    t2.join();

    cout << counter << endl;

    thread t3(work2);
    thread t4(work2);

    t3.join();
    t4.join();

    cout << numbering << endl;
}
