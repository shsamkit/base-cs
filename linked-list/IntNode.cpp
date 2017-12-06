#include "IntNode.h"
#include <iostream>

using namespace std;

int IntNode::getData() {
    return this->data;
}

IntNode* IntNode::setData(int data) {
    this->data = data;
    return this;
}

void IntNode::print() {
    cout << this->getData();            
}