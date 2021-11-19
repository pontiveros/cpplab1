//
//  TNode.hpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/18/21.
//  Copyright © 2021 Florencia Ontiveros. All rights reserved.
//

#ifndef TNode_Generic_node_20211118_hpp
#define TNode_Generic_node_20211118_hpp

struct TNode *createNode(long value);

struct TNode {
    long data;
    struct TNode *next;
};

#endif /* TNode_Generic_node_20211118_hpp */
