#include "AbstractNode.h"

AbstractNode* AbstractNode::getNext() {
    return this->next;
}

AbstractNode* AbstractNode::setNext(AbstractNode *next) {
    this->next = next;
    return this;
}