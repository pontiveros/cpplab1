//
//  TEntity.h
//  Exercise_15
//
//  Created by Pedro Ontiveros on 03/25/22.
//

///////////////////////////////////////////////////////////////////////////////////
// compile release: clang++ -Wall -std=c++11 source1... -o out.file              //
// compile debug: clang++ -Wall -std=c++11 -g main.cpp source_01.cpp -o out.file //
// debugger: lldb {prog.debug (program name)}                                    //
///////////////////////////////////////////////////////////////////////////////////

#ifndef __TENTITY_C5171847ED8A367F6D70702106DEE0F6_H__
#define __TENTITY_C5171847ED8A367F6D70702106DEE0F6_H__

class TEntity {
public: 
             TEntity();
    virtual ~TEntity();
protected: 
    double _x, _y;

};


#endif /* __TENTITY_C5171847ED8A367F6D70702106DEE0F6_H__ */