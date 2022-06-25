#include <iostream>


class Point {
public:
    float x;
    float y;

    Point (float x, float y) {
        this->x = x;
        this->y = y;
    }

    friend std::ostream &operator<< (std::ostream &os, const Point &p) {
        os << "(" << p.x << ", " << p.y << " Difference: " << p.x - p.y << ")";
        return os;
    }
};

class Node {
public:
    Point* data;
    Node *next;
};

void printList (Node *n) {
    while (n != NULL) {
        std::cout << (n->data) << std::endl;
        n = n->next;
    }
}

// data =  { 100, 200, 300 , 400 }
int main () {
    Node *Head = new Node;
    Node *secondNode = new Node;
    Node *thirdNode = new Node;
    Node *fourthNode = new Node;

    Head->data = new Point (1, 1);
    Head->next = secondNode;

    secondNode->data = new Point (2, 2);
    secondNode->next = thirdNode;

    thirdNode->data = new Point (3, 3);
    thirdNode->next = fourthNode;

    fourthNode->data = new Point (4, 4);
    fourthNode->next = NULL;

    printList (Head);

    Point point1 = {100, 100}; //Stack
    Point *point2 = new Point (200, 200);//Heap;

    std::cout << point1 << std::endl;
    std::cout << *point2 << std::endl;


    return 0;
}
