//
//  TEntity.cpp
//  Exercise_11
//
//  Created by Pedro Ontiveros on 03/06/22.
//

///////////////////////////////////////////////////////////////////////////////////
// compile release: clang++ -Wall -std=c++11 source1... -o out.file              //
// compile debug: clang++ -Wall -std=c++11 -g main.cpp source_01.cpp -o out.file //
// debugger: lldb {prog.debug (program name)}                                    //
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "TEntity.h"

int TEntity::Reduce(int param)
{
    try {
        int result = param / _div;
        return result;  
    // } catch (const std::exception &e) {
    } catch (...) {
        std::cout << "*** ERROR: no se puede dividir por cero\n";
        return -1;
    } 
}