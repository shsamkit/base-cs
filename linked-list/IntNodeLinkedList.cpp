#include "IntNodeLinkedList.h"

LinkedList* IntNodeLinkedList::fromArray(int *dataArray, int length) {  
    return (new LinkedList())->setHead((IntNode *)getIntNodes(dataArray, length));            
}

AbstractNode* IntNodeLinkedList::getIntNodes(int *dataArray, int length) {                        
    if(length != 0) {
        return (new IntNode())
        ->setData(*dataArray)
        ->setNext(getIntNodes(dataArray+1, length-1));
    } else {
        return NULL;
    }           
}