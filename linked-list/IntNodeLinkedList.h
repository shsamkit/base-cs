#include "LinkedList.h"
#include "IntNode.h"
#include <iostream>

#ifndef INTNODELINKEDLIST_H
#define INTNODELINKEDLIST_H
class IntNodeLinkedList {
    public:
        static LinkedList* fromArray(int *dataArray, int length);
    
    private:
        static AbstractNode* getIntNodes(int *dataArray, int length);
};
#endif