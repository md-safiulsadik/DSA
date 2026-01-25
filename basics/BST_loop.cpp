#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* root;

Node* get_node(int data) {
    Node* node = new Node();

    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    
    return node;
}


void insert(int data) {
    Node* curr = root;

    if (curr == NULL) {
        root = get_node(data);
        return;
    }
    
    while (true) {
        if (data <= curr->data) {
            if (curr->left == nullptr) {
                curr->left = get_node(data);
                return;
            }
            curr = curr->left;
        }
        else {
            if (curr->right == nullptr) {
                curr->right = get_node(data);
                return;
            }
            curr = curr->right;
        }
    }
}

int search(int data) {
    Node* curr = root;

    while (true) {
        if (curr == NULL) {
            return -1;
        }

        if (curr->data == data) {
            return 1;
        }
        else if (curr->data > data) {
            curr = curr->left;
        }
        else {
            curr = curr->right;
        }
    }
    return -1;
}

int MAXIMUM() {
    if (root == NULL) 
        return -1;

    Node* curr = root;

    while (true) {
        if (curr->right == nullptr) {
            return curr->data;
        }
        else {
            curr = curr->right;
        }
    }
    return -1;
}

Node* MINIMUM(Node* node) {
    if (node == NULL) 
        return nullptr;

    Node* curr = node;

    while (true) {
        if (curr->left == nullptr) {
            return curr;
        }
        else {
            curr = curr->left;
        }
    }
    return nullptr;
}

void delete_node(int data) {
    if (root == NULL) return;

    Node* curr = root;

    while (true) {
        if (data < curr->data) {
            curr = curr->left;
        }
        else if (data > curr->data) {
            curr = curr->right;
        } 
        else { // We found the node
            // Case 1: NO child
            if (curr->left == nullptr && curr->right == nullptr) {
                delete curr;
                curr = nullptr;
            }
            // Case 2: One child
            else if (curr->left == nullptr) {
                Node* temp = curr;
                curr = curr->right;
                delete temp;
            }
            else if (curr->right == nullptr) {
                Node* temp = curr;
                curr = curr->left;
                delete temp;
            }
            else {  // Case 3: Both child
                Node* temp = MINIMUM(curr->right);
                curr->data = temp->data;
                delete temp; 
            }
        }
    }
}

int main() {

    root = nullptr;
    insert(50);
    insert(30);
    insert(70);
    insert(20);
    insert(40);

    cout << search(10) << endl;
    cout << search(50) << endl;
    cout << search(2) << endl;
    cout << search(40) << endl;

    cout << MAXIMUM() << endl;
    cout << MINIMUM() << endl;

    return 0;
}