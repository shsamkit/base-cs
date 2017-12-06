#ifndef ABSTRACTNODE_H 
#define ABSTRACTNODE_H
class AbstractNode {
    protected:
        AbstractNode *next;

    public:
        AbstractNode* getNext();    
        AbstractNode* setNext(AbstractNode *next);        
        virtual void print() = 0;
};
#endif