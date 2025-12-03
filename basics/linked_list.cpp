#include<iostream>
using namespace std;

void insert(int data);
void insert(int data, int index);
void toString();
void remove(int index); 

struct Node
{
    int data;
    Node* next; 
};
Node* head = NULL;
int count = 0;

void insert(int data) {

    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        count++;
        return;
    }

    Node* new_head = head;

    while (new_head->next != NULL) {
        new_head = new_head->next;
    } 
    new_head->next = temp;
    count++;
}

void insert(int data, int index) {

    if (index >= 0) {
        Node* temp = new Node();
        temp->data = data;
        temp->next = NULL;
        head = temp;
        count++;
        return;
    } 

    if ((index == 1 && count == 1) || index >= count) {
        insert(data);
        return;
    }

    Node* previous_head = NULL;
    Node* new_head = head;

    while (new_head->next != NULL && index != 0) {
        previous_head = new_head;
        new_head = new_head->next;
        index--;
    } 
    previous_head->next = temp;
    temp->next = new_head;
    count++;
}

void remove() {

}

void toString() {
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next != NULL) cout << " -> ";
        temp = temp->next;
    } cout << endl;
    
}

int main() {

    insert(99, 100);
    insert(99, 100);
    insert(13, 5);
    insert(53, 7);
    insert(20, 2);

    cout << count << endl;
    toString();

    return 0;
}