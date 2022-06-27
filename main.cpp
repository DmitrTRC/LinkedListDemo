#include <iostream>


class Node {
public:
    int data;
    Node *next;
};

void printList (Node *n) {
    while (n != NULL) {
        std::cout << (n->data) << std::endl;
        n = n->next;
    }
}

// data =  { 100, 200, 300 , 400 }

typedef Node *nodePtr;

//TODO: Implement the function
void push_back( nodePtr *Head, int value){

}

void insertAtBegin (nodePtr *head, int value) {
    // Prepare a new node
    nodePtr tmpNode = new Node;

    // Set node value
    tmpNode ->data = value;

    // Set tmpNode before current Head
    tmpNode ->next = *head;

    *head  = tmpNode;

}

int main () {
    nodePtr Head = new Node;
    nodePtr secondNode = new Node;
    nodePtr thirdNode = new Node;
    nodePtr fourthNode = new Node;

    Head->data = 1;
    Head->next = secondNode;

    secondNode->data = 2;
    secondNode->next = thirdNode;

    thirdNode->data = 3;
    thirdNode->next = fourthNode;

    fourthNode->data = 4;
    fourthNode->next = NULL;

    printList (Head);

    std::cout << "Adding two elements -1 , 100 " << std::endl;

    insertAtBegin (&Head, -1);
    insertAtBegin (&Head, 100);

    printList (Head);



    return 0;
}
