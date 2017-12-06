#include <iostream>
#include "IntNode.h"
#include "LinkedList.h"

using namespace std;

class IntNodeLinkedListFactory {
    public:
        static LinkedList* fromArray(int *dataArray, int length) {  
            return (new LinkedList())->setHead((IntNode *)getIntNodes(dataArray, length));            
        }

        static AbstractNode* getIntNodes(int *dataArray, int length) {                        
            if(length != 0) {
                return (new IntNode())
                ->setData(*dataArray)
                ->setNext(getIntNodes(dataArray+1, length-1));
            } else {
                return NULL;
            }           
        }
};

int  main() {    
    int dataArray[] = {1,2,3,4,5};
    LinkedList *intnodeList = IntNodeLinkedListFactory::fromArray(dataArray, 5);
    intnodeList->print();
    return 1;
}

