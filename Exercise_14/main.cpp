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

int main() 
{
    testMultithread_1();
    std::cout << "End of program!\n";
    return 0;
}