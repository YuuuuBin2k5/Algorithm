#include <bits\stdc++.h>
using namespace std;

// Binary Tree Representation
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a new node in the binary tree
void insert(Node*& root, int value) {
    if (root == nullptr) {
        root = new Node(value);
    } else if (value < root->data) {
        insert(root->left, value);
    } else {
        insert(root->right, value);
    }
}

// Function to perform in-order traversal of the binary tree
void inOrderTraversal(Node* root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

// Function to perform pre-order traversal of the binary tree
void preOrderTraversal(Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

// Function to perform post-order traversal of the binary tree
void postOrderTraversal(Node* root) {
    if (root != nullptr) {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data << " ";
    }
}

// Function to delete the binary tree and free memory
void deleteTree(Node* root) {
    if (root != nullptr) {
        deleteTree(root->left);
        deleteTree(root->right);
        delete root;
    }
}

int main() {
    Node* root = nullptr;
    int n, value;

    cout << "Enter the number of elements to insert in the binary tree: ";
    cin >> n;

    cout << "Enter the elements (integers) to insert into the binary tree: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        insert(root, value);
    }

    cout << "In-order traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Pre-order traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postOrderTraversal(root);
    cout << endl;

    deleteTree(root); // Free memory
    return 0;
}