//
//  Ex_07_Stack.cpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/15/21.
//  Copyright © 2021 Florencia Ontiveros. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#include "TNode.hpp"
#include "Ex_07_Stack.hpp"

/* LIFO(Last In First Out): Data Structure */

struct TNode *stack = NULL; // global

/* ******** Stack Begin ******** */
void push(struct TNode *node)
{
    if (node != NULL) {
        if (stack == NULL) {
            stack = node;
        } else {
            node->next = stack;
            stack = node;
        }
    }
}

struct TNode *pop()
{
    if ( stack == NULL ) {
        return NULL;
    } else {
        struct TNode *out = stack;
        
        if (stack->next != NULL) {
            stack = out->next;
        } else {
            stack = NULL;
        }
        
        return out;
    }
}
/* ******** Stack End ******** */

void Stack_Example()
{
    struct TNode *out = NULL;
    int level = 0;

    push(createNode(65));
    push(createNode(40));
    push(createNode(15));
    push(createNode(28));
    push(createNode(74));
    push(createNode(92));
    
    while ((out = pop()) != NULL) {
        printf("Level %d -> data: %ld\n", (++level), out->data);
        delete out;
        out = NULL;
    }
}
