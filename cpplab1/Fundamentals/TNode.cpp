//
//  TNode.cpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/18/21.
//  Copyright © 2021 Florencia Ontiveros. All rights reserved.
//

#include <stdio.h>
#include "TNode.hpp"

struct TNode *createNode(long value)
{
    struct TNode *node = new struct TNode;
    node->data = value;
    node->next = NULL;
    return node;
}
