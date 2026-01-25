#include<iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* root;

TreeNode* get_new_node(int data) {
    TreeNode* new_node = new TreeNode();

    new_node->data = data;
    new_node->left = nullptr;
    new_node->right = nullptr;

    return new_node;
}

TreeNode* insert(TreeNode* node, int data) {
    if (node == nullptr) {
        node = get_new_node(data);
    }
    else if (node->data >= data) {
        node->left = insert(node->left, data);
    }
    else {
        node->right = insert(node->right, data);
    }
    return node;
}

bool search(TreeNode* node, int data) {
    if (node == nullptr) return false;

    if (node->data == data) return true;
    else if (data < node->data) return search(node->left, data);
    else return search(node->right, data);
}

TreeNode* find_max(TreeNode* node) {
    if (node == nullptr) return nullptr;
    
    if (node->right == nullptr) return node;
    
    return find_max(node->right);
}

TreeNode* find_min(TreeNode* node) {
    if (node == nullptr) return nullptr;
    
    if (node->left == nullptr) return node;
    
    return find_min(node->left);
}

int main() {
    
    root = nullptr;    

    root = insert(root, 15);
    root = insert(root, 25);
    root = insert(root, 5);
    root = insert(root, 65);
    root = insert(root, 7);

    cout << search(root, 54) << endl;
    cout << search(root, 7) << endl;
    cout << search(root, 32) << endl;
    cout << search(root, 25) << endl;
    
    TreeNode* max = find_max(root);
    TreeNode* min = find_min(root);

    cout << max->data << endl;
    cout << min->data << endl;

    return 0;
} 