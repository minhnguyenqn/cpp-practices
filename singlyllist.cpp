#include<iostream>
#include<sstream> 
using namespace std;
class LinkedList {
public:
    class Node;

private:
    Node* head;
    Node* tail;
    int size;

public:
    class Node {
    private:
        int value;
        Node* next;

        friend class LinkedList;

    public:
        Node() {
            this->next = NULL;
        }

        Node(Node* node) {
            this->value = node->value;
            this->next = node->next;
        }

        Node(int value, Node* next = NULL) {
            this->value = value;
            this->next = next;
        }
    };

    LinkedList() : head(NULL), tail(NULL), size(0) {};

    void partition(int k);
};
void LinkedList::partition(int k) {
    Node* lessHead = NULL;
    Node* lessTail = NULL;

    Node* equalHead = NULL;
    Node* equalTail = NULL;

    Node* greaterHead = NULL;
    Node* greaterTail = NULL;

    Node* current = head;

    while (current != NULL) {
        Node* nextNode = current->next;
        current->next = NULL;

        if (current->value < k) {
            if (lessHead == NULL) {
                lessHead = lessTail = current;
            }
            else {
                lessTail->next = current;
                lessTail = current;
            }
        }
        else if (current->value == k) {
            if (equalHead == NULL) {
                equalHead = equalTail = current;
            }
            else {
                equalTail->next = current;
                equalTail = current;
            }
        }
        else {
            if (greaterHead == NULL) {
                greaterHead = greaterTail = current;
            }
            else {
                greaterTail->next = current;
                greaterTail = current;
            }
        }

        current = nextNode;
    }

    head = NULL;
    tail = NULL;

    if (lessHead != NULL) {
        head = lessHead;
        tail = lessTail;
    }

    if (equalHead != NULL) {
        if (head == NULL) {
            head = equalHead;
            tail = equalTail;
        }
        else {
            tail->next = equalHead;
            tail = equalTail;
        }
    }

    if (greaterHead != NULL) {
        if (head == NULL) {
            head = greaterHead;
            tail = greaterTail;
        }
        else {
            tail->next = greaterHead;
            tail = greaterTail;
        }
    }
}