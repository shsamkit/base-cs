#include <iostream>

using namespace std;

class AbstractNode {

    protected:
        AbstractNode *next;

    public:
        AbstractNode* getNext() {
            return this->next;
        }

        AbstractNode* setNext(AbstractNode *next) {
            this->next = next;
            return this;
        }

        virtual void print() = 0;
};

class IntNode : public AbstractNode {
    int data;    

    public:
        int getData() {
            return this->data;
        }

        IntNode* setData(int data) {
            this->data = data;
            return this;
        }

        void print() {
            cout << this->getData();            
        }
};

template <class T>
class LinkedList {
    private:
        AbstractNode *head;
    
    public:
        LinkedList* setHead(T *head) {
            this->head = head;
            return this;
        }

        void print() {
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
};

class IntNodeLinkedListFactory {
    public:
        static LinkedList<IntNode>* fromArray(int *dataArray, int length) {  
            return (new LinkedList<IntNode>())->setHead((IntNode *)getIntNodes(dataArray, length));            
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
    LinkedList<IntNode> *IntnodeList = IntNodeLinkedListFactory::fromArray(dataArray, 5);
    IntnodeList->print();
    return 1;
}

