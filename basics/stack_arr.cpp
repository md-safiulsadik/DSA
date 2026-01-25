#include<iostream>
using namespace std;

const int MAX = 10;

class Stack {
    private:
        int st[MAX];
        int top;
    
    public:
        Stack() {
            top = -1;
        }
    
    bool isEmpty() {
        return top <= -1;
    }

    bool isFull() {
        return top >= MAX - 1;
    }

    void push(int val) {
        if (isFull()) {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        st[top] = val;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return -1;
        }

        return st[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        return st[top];
    }

    int size() {
        return top + 1;
    }
};

int main() {
    Stack s;
    s.push(4);
    s.push(6);
    s.push(2);
    s.push(7);
    s.push(3);
    s.push(2);

    for (int i = 0; i < 10; i++)
    {
        cout << s.pop() << endl;
    }
    
}