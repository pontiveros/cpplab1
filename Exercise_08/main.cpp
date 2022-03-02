//
//  main.cpp
//  Exercise_08
//
//  Created by Pedro Ontiveros on 12/23/21.
//

///////////////////////////////////////////////////////////////////////////////////
// compile release: clang++ -Wall -std=c++11 source1... -o out.file              //
// compile debug: clang++ -Wall -std=c++11 -g main.cpp source_01.cpp -o out.file //
// debugger: lldb {prog.debug (program name)}                                    //
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "POO_Exercises.hpp"

using namespace Basic_Classes_Concept;

int main(int argc, const char * argv[]) {
    Exercise_01();
    std::cout << "End of program!\n";
    return 0;
}
