//
//  main.cpp
//  Exercise_14
//
//  Created by Pedro Ontiveros on 03/09/22.
//

///////////////////////////////////////////////////////////////////////////////////
// compile release: clang++ -Wall -std=c++11 source1... -o out.file              //
// compile debug: clang++ -Wall -std=c++11 -g main.cpp source_01.cpp -o out.file //
// debugger: lldb {prog.debug (program name)}                                    //
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <unistd.h>
#include <thread>
#include <mutex>
#include <chrono>

#define MAX_THREADS  10
#define DUMMY_WORK1  1
#define DUMMY_WORK2  2
#define DUMMY_WORK3  3
#define DUMMY_WORK4  4

long nGlobalValue = 0;

void call_from_thread()
{
    for (int i = 0; i < 100; i++) {
        std::cout << "Running in second thread line #" << (i +1) << "\n";
        sleep(1);
    }
}

void testMultithread_1()
{
    std::thread t; 
    t = std::thread(call_from_thread); // creates and starts the thread
    
    std::cout << "******** begin function: main thread ********\n";
    for (int i = 0; i < 10; i++) {
        std::cout << "Running in main thread line #" << (i +1) << "\n";
        sleep(2);
    }
    t.detach(); // interrupts the thread running... 
    std::cout << "******** end function: main thread ********\n";
}

void dummy_worker(int workId, long param)
{
    // std::cout << "Thread #" << workId << " param: " << param << std::endl;
    switch (workId) {
        case DUMMY_WORK1: {
            for (int i = 0; i < 10; i++) {
                std::mutex m;
                m.lock();
                nGlobalValue = 10000 + i;
                std::cout << "Thread #" << workId << " param: " << param << "\tnGlobalValue: "<< nGlobalValue << "\n\n";
                m.unlock();
                sleep(1);
            }
        } break;    
        case DUMMY_WORK2: {
            int counter = 20; 
            while (counter > 0) {
                std::mutex m;
                m.lock();
                nGlobalValue = 20000;
                std::cout << "Thread #" << workId << " param: " << param << "\tnGlobalValue: "<< nGlobalValue << "\n\n";
                m.unlock();
                // usleep(500);
                sleep(1);
                counter--;
            }
        } break;
        case DUMMY_WORK3: {
            for (int i = 0; i < param; i++) {
                std::cout << "dummy work #3...\n";
                sleep(1);
                std::cout << "Thread #" << workId << " param: " << param << std::endl;
            }
        } break;
        case DUMMY_WORK4: {
            for (int i = 0; i < param; i++) {
                std::cout << "dummy work #4...\n";
                sleep(1);
                std::cout << "Thread #" << workId << " param: " << param << std::endl;
            }
        } break;
        default:
            std::cout << "Default worker with no Id.\n";
    }
    std::cout << "\n***** end of thread #" << workId <<" *****\n";
}

void testMultithread_2()
{
   std::thread t1 = std::thread(dummy_worker, DUMMY_WORK1, 10);
   std::thread t2 = std::thread(dummy_worker, DUMMY_WORK2, 25);
//    std::thread t3 = std::thread(dummy_worker, DUMMY_WORK1, 12);
//    std::thread t4 = std::thread(dummy_worker, DUMMY_WORK1, 5);

   t1.join();
   t2.join();
//    t3.join();
//    t4.join();
}

int main() 
{
    // testMultithread_1();
    testMultithread_2();
    std::cout << "End of program!\n";
    return 0;
}