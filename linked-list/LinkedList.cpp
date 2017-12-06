#include "LinkedList.h"

using namespace std;
    
LinkedList* LinkedList::setHead(AbstractNode *head) {
    this->head = head;
    return this;
}

void LinkedList::print() {
    AbstractNode *next = head;
    cout<< "[";
    while(1) {
        next->print();
        next = next->getNext();
        if(next != NULL) {
            cout<<",";
        } else {
            break;
        }
    }
    cout<< "]"<<endl;
}