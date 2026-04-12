#include<iostream>
#include<vector>
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

void pre_order(TreeNode* node) { // root-left-right

    if (node == nullptr) return; 

    pre_order(node->right);
    cout << node->data << " ";
    pre_order(node->left);
}

void in_order(TreeNode* node) { // left-root-right

    if (node == nullptr) return; 

    in_order(node->left);
    cout << node->data << " ";
    in_order(node->right);
}

void post_order(TreeNode* node) { // left-right-root

    if (node == nullptr) return; 

    post_order(node->left);
    post_order(node->right);
    cout << node->data << " ";
}

TreeNode* helper(TreeNode* root) {
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

TreeNode* Delete(TreeNode* root, int key) {
    if (root == nullptr) return nullptr;

    if (key < root->data) {
        root->left = Delete(root->left, key);
    }
    else if (key > root->data) {
        root->right = Delete(root->right, key);
    }
    else { 
        // Case 1: Leaf or One child
        if (root->left == nullptr) {
            TreeNode* temp = root->right;
            delete(root);
            return temp;
        }
        else if (root->right == nullptr) {
            TreeNode* temp = root->left;
            delete(root);
            return temp;
        }

        TreeNode* temp = helper(root->right);
        root->data = temp->data;
        root->right = Delete(root->right, temp->data);
    }
    return root;
}

int main() {
    
    root = nullptr;    

    root = insert(root, 15);
    root = insert(root, 25);
    root = insert(root, 5);
    root = insert(root, 65);
    root = insert(root, 7);
    root = insert(root, 4);
    root = insert(root, 18);

    cout << search(root, 54) << endl;
    cout << search(root, 7) << endl;
    cout << search(root, 32) << endl;
    cout << search(root, 25) << endl;
    
    TreeNode* max = find_max(root);
    TreeNode* min = find_min(root);

    cout << "Max-val: " << max->data << endl;
    cout << "Min-val: " << min->data << endl;
    
    
    Delete(root, 4);
    Delete(root, 15);
    Delete(root, 65);
    
    
    cout << "Pre-order: ";
    pre_order(root);
    cout << endl;


    cout << "In-order: ";
    in_order(root);
    cout << endl;

    cout << "Post-order: ";
    post_order(root);
    cout << endl;

    return 0;
} 