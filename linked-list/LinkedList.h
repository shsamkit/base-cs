#include "AbstractNode.h"

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
class LinkedList {
    private:
        AbstractNode *head;
    public:
        LinkedList* setHead(AbstractNode *head);       
        void print();
};
#endif