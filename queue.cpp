#include <iostream>
using namespace std;

class Queue {
public:
    int *arr;
    int size;
    int front; 
    int rear;

    Queue(int size) {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data) {
        if (rear == size) {
            cout << "Queue is full." << endl;
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    void pop() {
        if (front == rear) {
            cout << "Queue is empty." << endl;
        } else {
            arr[front] = -1;
            front++;
            if (front == rear) {
                front = 0;
                rear = 0;
            }
        }
    }

    int getfront() {
        if (front == rear) {
            cout << "Queue is empty." << endl;
            return -1;
        } else {
            return arr[front];
        }
    }

    bool isempty() {
        return front == rear;
    }

    int getsize() {
        return rear - front;
    }
};

int main() {
    // define a queue
    Queue s(10);

    // insert elements
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);

    cout << "Get the size of the queue: " << s.getsize() << endl;
    cout << "Get the check empty or not: " << s.isempty() << endl;

    return 0;
}
