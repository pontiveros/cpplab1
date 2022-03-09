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


TEntity::TEntity(int div)
: _div(div)
{

}

TEntity::~TEntity()
{

}

int TEntity::Reduce(int param)
{
    if (_div == 0) {
        throw "Divided by 0 is not allowed, abort operation!";
    }
    return (param / _div);
}
