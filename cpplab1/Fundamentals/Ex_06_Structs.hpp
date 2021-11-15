//
//  Ex_05_Structs.hpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/12/21.
//  Copyright © 2021 Florencia Ontiveros. All rights reserved.
//

#ifndef Ex_06_Structs_hpp
#define Ex_06_Structs_hpp

void Struct_Fundamentals();

struct TProduct {
    long  code;
    float price;
    const char *name;
    const char *description;
};

struct TNode {
    long value;
    struct TNode *left;
    struct TNode *right;
};

#endif /* Ex_05_Structs_hpp */
