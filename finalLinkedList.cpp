#include <iostream>
using namespace std ;

class Node {
private :
    int value ;
    Node *next;
public :
    Node() {}
    Node(int v, Node* n): value(v), next(n) {}
    int getValue() const {return value;} Node* getNext() const {return next;}
    void setValue(int v) {value = v;}
    void setNext(Node* n) {next = n;}
};

typedef Node* NodePointer;

void printList(Node* &h){
    cout <<"List content: ";
    Node *visitNodes = h;
    while ( visitNodes != NULL){
        cout << visitNodes->getValue() << " ";
        visitNodes = visitNodes->getNext ();
        
    }// end while
    cout<<endl;
}
void insertHead(NodePointer &h, int v){
    h = new Node(v,h);
}
void insert(NodePointer &after, int v){
    after->setNext(new Node(v,after->getNext()));
    
}
void remove(NodePointer &after){
    Node* discard = after->getNext();
    after->setNext(discard->getNext());
    delete discard;
}
bool find(NodePointer &h, int key){
    Node* visitNodes = h;
    while(visitNodes != NULL){
        if(visitNodes->getValue()==key)
            return true;
        visitNodes=visitNodes->getNext();
    }
    return false;
}
int main() {
    /*
    Node *one = new Node(1, NULL);
    Node *two = new Node(5, NULL);
    Node *three = new Node(6 , NULL);
    one->setNext(two);
    two->setNext(three);
    Node *visitNodes = one;
*/
    Node *head = NULL;
    printList(head);
    insertHead(head, 6);
    printList(head);
    insertHead(head, 5);
    printList(head);
    insertHead(head, 1);
    printList(head);
    insert(head, 7 );
    printList(head);
    
    Node *temp = head->getNext();
    insert(temp, 8);
    printList(head);
    remove(temp);
    printList(head);
    /*
    remove(temp);
    printList(head);
    remove(temp);
    printList(head);
    */
    cout<<find(head,7)<<endl;
    cout<<find(head,10)<<endl;
    
    return 0;
}
