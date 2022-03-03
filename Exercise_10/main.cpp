//
//  main.cpp
//  Exercise_10
//
//  Created by Pedro Ontiveros on 03/02/22.
//

///////////////////////////////////////////////////////////////////////////////////
// compile release: clang++ -Wall -std=c++11 source1... -o out.file              //
// compile debug: clang++ -Wall -std=c++11 -g main.cpp source_01.cpp -o out.file //
// debugger: lldb {prog.debug (program name)}                                    //
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "TPoint.h"

void testTPoint_1()
{
    TPoint *p1 = new TPoint();
    TPoint *p2 = new TPoint();

    p1->SetX(1.2);
    p1->SetY(2.4);
    p1->Print();

    p2->SetX(3.5);
    p2->SetY(1.4);
    p2->Print();

    delete p1;
    delete p2;
}

void testTPoint_2() 
{
    // Instance as objects
    TPoint p1 = TPoint(2.3, 6.3);
    TPoint p2 = TPoint(2.09, 4.5);

    TPoint p3 = p1 + p2;

    p1.Print();
    p2.Print();
    p3.Print();
}

void testTPoint_3()
{
    TPoint p1 = TPoint(4.3, 5.4);
    TPoint p2 = TPoint(1.2, 2.41);

    p1.Print();
    p2.Print();
    (p1 - p2).Print();
}

void testTPoint_4()
{
    TPoint p1 = TPoint(4.3, 5.4);
    TPoint p2 = TPoint(1.2, 2.41);

    p1.Print();
    p2.Print();
    (p1 * p2).Print();
}

void testTPoint_5()
{
    TPoint p1 = TPoint(4.3, 5.4);
    TPoint p2 = TPoint(1.2, 2.41);

    p1.Print();
    p2.Print();
    (p1 / p2).Print();
}

void testTPoint_6()
{
    // Instance as pointers
    TPoint *p1 = new TPoint(2.3, 6.3);
    TPoint *p2 = new TPoint(2.09, 4.5);

    p1->Print();
    p2->Print();
    (*p1 + *p2).Print();

    delete p1;
    delete p2;
}

int main(int argc, const char * argv[]) 
{
    // testTPoint_2();
    testTPoint_4();

    std::cout << "End of program!\n";
    return 0;
}
