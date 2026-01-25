#include<iostream>
using namespace std;

const int MAX = 10;

class Queue {
    private:
        int Q[MAX];
        int front;
        int rear;

    public:
        Queue() {
            front = -1;
            rear = -1;
        }

    bool isFull() {
        return (rear + 1) % MAX == front;
    }
    bool isEmpty() {
        return (front == -1) && (rear == -1);
    }

    void enQueue(int val) {

        if (isFull()) {
            cout << "Queue Overflow" << endl;
            return;
        }

        if (isEmpty()) {
            front = 0;
            rear = 0;
            Q[rear] = val;
        }
        else {
            rear = (rear + 1) % MAX;
            Q[rear] = val;
        }
    }

    int deQueue() {
        int val;

        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return -1;
        }

        if (front == rear) {
            val = Q[front];
            
            front = -1;
            rear = -1;
        }
        else {
            val = Q[front];
            front = (front + 1) % MAX;
        }

        return val;
    }
};

int main() {

    Queue q;

    q.enQueue(4);
    q.enQueue(7);
    q.enQueue(2);
    q.enQueue(23);
    q.enQueue(7);
    q.enQueue(5);
    q.enQueue(5);
    q.enQueue(5);
    q.enQueue(5);
    q.enQueue(5);
    q.enQueue(5);
    q.enQueue(5);
    
    while (true)
    {
        int val = q.deQueue();
        if (val == -1) break;
        cout << val << endl;
    }
    

    return 0;
}