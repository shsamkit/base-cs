#include "AbstractNode.h"
#include <iostream>

#ifndef INTNODE_H
#define INTNODE_H
class IntNode : public AbstractNode {
    int data;    

    public:
        int getData();       
        IntNode* setData(int data);        
        void print();
};
#endif