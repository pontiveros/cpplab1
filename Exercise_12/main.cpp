//
//  main.cpp
//  Exercise_12
//
//  Created by Pedro Ontiveros on 03/08/22.
//

///////////////////////////////////////////////////////////////////////////////////
// compile release: clang++ -Wall -std=c++11 source1... -o out.file              //
// compile debug: clang++ -Wall -std=c++11 -g main.cpp source_01.cpp -o out.file //
// debugger: lldb {prog.debug (program name)}                                    //
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "TFunctions.h"

void test_1()
{
    void (*pfn)(const char*) = fn_listener;
    fn_worker(1);
    std::cout << std::endl;
    fn_worker(2, pfn);
}

void test_2() 
{
    void (*pf[4])(double a, double b);
    pf[0] = fn_sum;
    pf[1] = fn_div;
    pf[2] = fn_multi;
    pf[3] = fn_subs;

    fn_background_tasks(pf, 4);
}

int main(int argc, const char * argv[]) 
{
    test_2();    
    std::cout << "End of program!\n";
    return 0;
}
