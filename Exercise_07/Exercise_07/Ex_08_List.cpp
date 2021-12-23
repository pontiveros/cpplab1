//
//  Ex_08_List.cpp
//  cpplab1
//
//  Created by Pedro Ontiveros on 11/17/21.
//

#include <stdio.h>
#include "TNode.hpp"
#include "Ex_08_List.hpp"

/* FIFO(First In First Out): Data Structure */
struct TNode *list = NULL;

/* ******** List Begin ******** */
void addNode(struct TNode *node)
{
    if (list == NULL) {
        list = node;
    } else {
        struct TNode *head = list;
        while (head) {
            if (head->next != NULL) {
                head = head->next;
            } else {
                head->next = node;
                head = node->next;
            }
        }
    }
}

struct TNode *removeNode()
{
    if (list == NULL) {
        return NULL;
    } else {
        struct TNode * out = list;
        list = list->next;
        return out;
    }
}
/* ******** List End ******** */

void List_Example()
{
    struct TNode *node = NULL;
    int level = 0;
    
    addNode(createNode(10));
    addNode(createNode(25));
    addNode(createNode(8));
    addNode(createNode(74));
    addNode(createNode(23));
    addNode(createNode(45));
    addNode(createNode(5));
    addNode(createNode(63));
    
    while ((node = removeNode()) != NULL) {
        printf("Level %d -> data: %ld\n", (++level), node->data);
        delete node;
        node = NULL;
    }
}
