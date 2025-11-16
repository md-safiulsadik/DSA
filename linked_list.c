#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;

void display() {
    struct Node* temp;
    temp = head;

    while (temp != NULL) {
        printf("%d",temp->data);
        if (temp->next != NULL) printf(" -> ");
        temp = temp->next;
    } 
    printf("\n");
}

void insert_begin(int data) {
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    head = temp;
}

void insert_end(int data) {

    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        return;
    }

    struct Node* temp1;
    temp1 = head;

    while (temp1->next != NULL) temp1 = temp1->next;
    temp1->next = temp;
}


void insert(int data, int index) {

    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if (index == 1) {
        temp->next = head;
        head = temp;
        return;
    }
 
    struct Node* new_temp = head;
    
    for (int i = 1; (i < index-1) && (new_temp != NULL); i++) {
        new_temp = new_temp->next;
    }
    if (new_temp == NULL) {
        free(temp);
        return;
    }

    temp->next = new_temp->next;
    new_temp->next = temp;
}

void delete(int index) {
    
    struct Node* temp = head;

    if (index == 1) {
        temp = temp->next;
        head = temp;
        return;
    }

    struct Node* target;
    
    for (int i = 1; i < index - 1; i++) {
        temp = temp->next;
    }
    target = temp->next;
    temp->next = target->next;
    free(target);
}

void reverse() { 
    struct Node* current;
    struct Node* next;
    struct Node* prev;

    prev = NULL;
    current = head;
    
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } 
    head = prev;
}


int main() {

    head = NULL;

    insert_end(5);
    insert_end(7);
    insert_end(2);
    insert_end(3);
    insert_begin(5);
    insert_begin(7);
    insert_begin(2);
    insert_begin(3);

    insert(33, 1);
    insert(33, 1);
    insert(33, 1);
    insert(33, 1);
    insert(23, 2);
    insert(23, 222);

    delete(1);
    delete(1);
    delete(1);
    delete(1);
    delete(4);
    delete(3);

    display();

    reverse();
    
    display();

    struct Node *node, *temp;
    node = head;
    
    while (node != NULL) {
        temp = node;
        node = node->next;
        free(temp);
    }
    
    return 0;
}