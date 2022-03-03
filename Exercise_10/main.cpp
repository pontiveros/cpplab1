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


int main(int argc, const char * argv[]) {

    TPoint *p1 = new TPoint();
    TPoint *p2 = new TPoint();

    p1->SetX(1.2);
    p1->SetY(2.4);
    p1->Print();

    p2->SetX(3.5);
    p2->SetY(1.4);
    p2->Print();

    std::cout << "End of program!\n";
    return 0;
}
