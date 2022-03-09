//
//  TFunctions.cpp
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
#include <unistd.h>
#include "TFunctions.h"

void fn_worker(int _wrk, void (*pfn)(const char *pszMessage))
{
    for (int i = 0;  i < 10; i++) {
        std::cout << "work #" << _wrk << " -> dummy task #" << (i + 1) << "\n";
        sleep(1);
    }

    if (pfn != NULL) {
        pfn("The process has been finished!\n");
    }
}  

void fn_listener(const char *msg)
{
    std::cout << "Message: " << msg << std::endl;
}

void fn_background_tasks(void (*pf[])(double a, double b), int count)
{
    double a, b = 0.0;
    try { 
        std::cout << "*********** BEGIN PROCESS ***********\n";
        std::cout << "INSERT A: ";
        std::cin >> a;
        std::cout << "INSERT B: ";
        std::cin >> b;

        for (int i = 0; i < count; i++) {
            pf[i](a, b);
        }
        std::cout << "*********** END OF PROCESS ***********\n";
    } catch (const char *err) {
        std::cout << err << std::endl;
    }
}

void fn_sum(double a, double b)
{
    std::cout << "SUM: \t" << a << " + " << b << " = " << (a + b) << "\n";
}

void fn_multi(double a, double b)
{
    std::cout << "MULTI: \t" << a << " * " << b << " = " << (a * b) << "\n";
}

void fn_subs(double a, double b)
{
    std::cout << "SUBS: \t" << a << " - " << b << " = " << (a - b) << "\n";
}

void fn_div(double a, double b)
{
    if (b == 0) 
        throw "************ ERROR: cannot devided by zero ************\n";

    std::cout << "DIV: \t" << a << " / " << b << " = " << (a / b) << "\n";
}
