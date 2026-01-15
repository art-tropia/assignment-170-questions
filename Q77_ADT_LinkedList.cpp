/*
 * Question: 77. Program implementing ADT Linked List (basic).
 */
#include <iostream>

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    Node* head;
public:
    LinkedList() : head(NULL) {}
    void insert(int val) {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }
    void display() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "NULL" << std::endl;
    }
};

int main() {
    LinkedList l;
    l.insert(10); l.insert(20); l.insert(30);
    l.display();
    return 0;
}
