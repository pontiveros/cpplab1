//
//  main.cpp
//  Exercise_07
//
//  Created by Pedro Ontiveros on 12/23/21.
//

///////////////////////////////////////////////////////////////////////////////////
// compile release: clang++ -Wall -std=c++11 source1... -o out.file              //
// compile debug: clang++ -Wall -std=c++11 -g main.cpp source_01.cpp -o out.file //
// debugger: lldb {prog.debug (program name)}                                    //
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "TNode.hpp"
#include "Ex_07_Stack.hpp"
#include "Ex_08_List.hpp"

int main(int argc, const char * argv[])
{
    Stack_Example();
    std::cout << "End of program!\n";
    return 0;
}
