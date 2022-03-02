//
//  main.cpp
//  Exercise_04
//
//  Created by Pedro Rene Ramiro Ontiveros on 12/21/21.
//

///////////////////////////////////////////////////////////////////////////////////
// compile release: clang++ -Wall -std=c++11 source1... -o out.file              //
// compile debug: clang++ -Wall -std=c++11 -g main.cpp source_01.cpp -o out.file //
// debugger: lldb {prog.debug (program name)}                                    //
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Exercise_04.hpp"

int main(int argc, const char * argv[]) {
    Pointer_Base_Concept();
    std::cout << "End of program!\n";
    return 0;
}
