/*
 * Question: 76. Program implementing ADT Queue.
 */
#include <iostream>

class Queue {
    int arr[100];
    int front, rear;
public:
    Queue() : front(0), rear(0) {}
    void enqueue(int val) {
        if (rear >= 99) std::cout << "Queue full" << std::endl;
        else arr[rear++] = val;
    }
    int dequeue() {
        if (front == rear) { std::cout << "Queue empty" << std::endl; return -1; }
        else return arr[front++];
    }
    void display() {
        for (int i = front; i < rear; i++) std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
};

int main() {
    Queue q;
    q.enqueue(1); q.enqueue(2); q.enqueue(3);
    q.display();
    std::cout << "Dequeued: " << q.dequeue() << std::endl;
    q.display();
    return 0;
}
