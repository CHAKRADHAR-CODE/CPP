
#include <bits/stdc++.h>
using namespace std;

#define SIZE 5

class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int x) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
        cout << x << " enqueued to queue\n";
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            return;
        }
        cout << arr[front++] << " dequeued from queue\n";
    }

    void peek() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
        } else {
            cout << "Front element is " << arr[front] << endl;
        }
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.peek();
    q.dequeue();
    q.display();

    return 0;
}
