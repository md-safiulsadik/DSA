#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

class Stack {
    private:
        Node* head = new Node();
    
    public:    
        Stack() {
            head = NULL;
        }

    void push(int data) {
        Node* newNode = new Node();

        if (!newNode) {
            cout << "Head Overflow" << endl;
            return;
        }

        newNode->data = data;
        
        newNode->next = head;
        head = newNode;
    }

    int pop() {
        
        if (head == NULL) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        
        int val = head->data;

        Node* temp = head;
        head = head->next;
        delete temp;
        return val;
    }
};


int main() {

    Stack s;

    s.push(5);
    s.push(0);
    s.push(1);
    s.push(2);
    s.push(8);
    s.push(6);

    while (true) {
        int v = s.pop();
        if (v == -1) break;
        cout << v << " ";
    }
    cout << endl;
}