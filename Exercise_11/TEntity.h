//
//  TEntity.h
//  Exercise_11
//
//  Created by Pedro Ontiveros on 03/06/22.
//

///////////////////////////////////////////////////////////////////////////////////
// compile release: clang++ -Wall -std=c++11 source1... -o out.file              //
// compile debug: clang++ -Wall -std=c++11 -g main.cpp source_01.cpp -o out.file //
// debugger: lldb {prog.debug (program name)}                                    //
///////////////////////////////////////////////////////////////////////////////////

#ifndef __TENTITY_2C060F8321AD4BB0BDDD75EC260887AB_H__
#define __TENTITY_2C060F8321AD4BB0BDDD75EC260887AB_H__

class TEntity {
    public: 
        TEntity(int div);
        virtual ~TEntity();

        int Reduce(int param);
    protected: 
    int _div;
};

#endif /* __TENTITY_2C060F8321AD4BB0BDDD75EC260887AB_H__ */