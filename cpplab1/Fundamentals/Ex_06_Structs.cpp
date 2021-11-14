//
//  Ex_05_Structs.cpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/12/21.
//  Copyright © 2021 Florencia Ontiveros. All rights reserved.
//

#include "Ex_06_Structs.hpp"


void AuxForStructFundamentals()
{

}

void Struct_Fundamentals()
{
    struct TNode node1, node2;
    
    long sizeOfStruct = (long)sizeof(struct TNode);
    printf("Size of Tnode: %ld\n", sizeOfStruct);
    
    node1._longValue  = 100;
    node1._floatValue = 12.38;
    
    printf("node1 longValue: %ld\n", node1._longValue);
    printf("node1 floatValue: %.3lf\n", node1._floatValue);
    printf("node2 longValue: %ld\n", node2._longValue);
    printf("node2 floatValue: %.3lf\n", node2._floatValue);
    
    node2 = node1;
    printf("node2 longValue: %ld\n", node2._longValue);
    printf("node2 floatValue: %.3lf\n", node2._floatValue);
}
