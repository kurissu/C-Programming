#include<iostream>
using namespace std;
////////////////// Header //////////////////////////////
template <class T> class Node {
private:
    T value;
    Node<T> *next;
public:
    Node(T &val, Node<T>* link): value(val), next(link) {} T getValue() const {return value;}
    Node<T>* getNext() const {return next;}
    void setValue(const T &val) {value = val;}
    void setNext(Node<T>* n) {next = n;}
};
template <class T> class LinkedList{
private:
    Node<T> *head;
public:
    LinkedList();
    Node<T>* getHead() const {return head;}
    void setHead(Node<T>* h) {head = h;}
    bool isEmpty();
    void insertFront(T newValue);
    void deleteFront();
    void printList();
    int size();
    void remove(T removeValue);
    void insertEnd(T newValue);
    void printBackwards();
    bool find(T matchValue);
};
////////////////// Implementation ////////////////////////
template <class T>
LinkedList<T>::LinkedList() : head(NULL) {};

template <class T>
bool LinkedList<T>::isEmpty(){
    return (head==NULL); }

template <class T>
void LinkedList<T>::insertFront(T newValue){
    head = new Node<T>(newValue, head); }

template <class T>
void LinkedList<T>::deleteFront(){
    if(isEmpty()){
        cout << "Nothing to delete!" << endl;
    }
    Node<T> *discard;
    discard = head;
    head = head->getNext();
    delete discard; }

template <class T>
void LinkedList<T>::printList(){
    cout << "List content: ";
    Node<T> *visitNodes = head;
    while(visitNodes != NULL){
        cout << visitNodes->getValue() << " --> ";
        visitNodes = visitNodes->getNext();
    }
    cout << endl;
}
///////////// PRINT LIST BACKWARD ///////////////
template <class T>
void LinkedList<T>::printBackwards(){
    cout << "List backwards: ";
    Node<T> *visitNodes = head;
    Node<T> *prev = NULL, *next;
    while(visitNodes != NULL){
        next = visitNodes->getNext();
        visitNodes->setNext(prev);
        prev = visitNodes;
        visitNodes = next;
    }
    head = prev;
    
    visitNodes = head;
    while(visitNodes != NULL){
        cout << visitNodes->getValue() << " --> ";
        visitNodes = visitNodes->getNext();
    }
    cout<<endl;
    
    visitNodes = head;
    prev = NULL;
    while(visitNodes != NULL){
        next = visitNodes->getNext();
        visitNodes->setNext(prev);
        prev = visitNodes;
        visitNodes = next;
    }
    head = prev;
    
}
///////////// ADDED SIZE FUNC ///////////////////
template <class T>
int LinkedList<T>::size(){
    Node<T> *traverse = head;
    int count = 0;
    while (traverse != NULL) {
        count++;
        traverse = traverse->getNext();
    }
    return count;
}
///////////// ADDED INSERTEND FUNC ///////////////
template <class T>
void LinkedList<T>::insertEnd(T newValue){
    Node<T> *end = head;
    if(head == NULL)
        new Node<T>(newValue, NULL);
    while(end->getNext() != NULL){
        end = end->getNext();
    }
    end->setNext(new Node<T>(newValue,NULL));
}

//////////// ADDED REMOVE FUNC ////////////////////
template <class T>
void LinkedList<T>::remove(T removeValue){
    if(head->getValue()==removeValue){
        deleteFront();
    }
    Node<T> *match = head;
    Node<T> *temp = head;
    int count = 0;
    while(match->getNext() != NULL){
        count++;
        if(match->getValue() == removeValue){
            for(int i=0; i<count-2;i++)
                temp = temp->getNext();
            Node<T> *temp2 = temp->getNext();
            temp->setNext(temp2->getNext());
            delete temp2;
        }
        match = match->getNext();
    }
        
}
//////////// ADDED FIND FUNC /////////////////////
template <class T>
bool LinkedList<T>::find(T matchValue){
    Node<T> *match = head;
    while(match->getNext() != NULL){
        if(match->getValue() == matchValue){
            cout<<"found match"<<endl;
            return 1;
        }
        match = match->getNext();
    }
    //check for item in NULL
    if(match->getValue() == matchValue)
    	return 1;
    return 0;
}
/////////////// MAIN ///////////////////////////
int main() {
    LinkedList<int> myList;
    for (int i=1; i<=5; i++)
        myList.insertFront(i);
    myList.printList();
    myList.deleteFront();
    myList.printList();
    cout << "Size of list = " << myList.size()<<endl;
    myList.printBackwards();
    myList.insertEnd(7);
    myList.printList();
    int key = 7;
    if (myList.find(key))
        cout << "We found " << key << endl;
    else
        cout << "We did not find " << key << endl;
    myList.remove(2);
    myList.printList();
}

