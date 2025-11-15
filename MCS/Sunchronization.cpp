#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>

using namespace std;

/*
Sunchronization basically make threads take turns so they don't fight lol

There are four major tools:
mutex -> mutual exclusion (only 1 thread can enter the protected section at a time)
lock_guard -> automatic safer mutex
unique_lock -> advanced locking
condition_variable -> thread to thread communication

*/


int dataValue = 0;          // shared data
bool ready = false;         // flag to indicate data is ready

mutex m;                    // mutex for syncing
condition_variable cv;      // for thread communication

// Producer: produces data
void producer() {
    for (int i = 0; i < 5; i++) {

        // lock_guard → simple and automatic locking
        {
            lock_guard<mutex> lg(m);
            dataValue = i * 10;        // produce data
            ready = true;              // mark as ready
            cout << "[Producer] Produced: " << dataValue << endl;
        }

        cv.notify_one();  // signal the consumer
        this_thread::sleep_for(chrono::milliseconds(500));
    }
}

// Consumer: waits for data and consumes it
void consumer() {
    for (int i = 0; i < 5; i++) {

        unique_lock<mutex> ul(m);    // unique_lock required for waiting

        // wait until producer signals
        cv.wait(ul, [](){ return ready; });

        cout << "→ [Consumer] Consumed: " << dataValue << endl;

        ready = false;  // reset flag for next round
    }
}

int main() {
    thread t1(producer);
    thread t2(consumer);

    t1.join();
    t2.join();

    return 0;
}