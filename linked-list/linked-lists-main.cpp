#include "IntNodeLinkedList.h"

using namespace std;

int  main() {    
    int dataArray[] = {1,2,3,4,5};
    LinkedList *intnodeList = IntNodeLinkedList::fromArray(dataArray, 5);
    intnodeList->print();
    return 1;
}

