//
// Created by Mrigank Anand on 10/08/20.
//
/*
 *              8
 *             / \
 *            10  3
 *           / \  / \
 *          1   6 14 67
 */

// binary tree it is a hierarchical data structure
#include <iostream>

using namespace std;

class node {
public:
    int data;
    node *left;
    node *right;

    node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};


// build the tree in preorder
node *buildTree() {
    int d;
    cin >> d;
    if (d == -1) {
        return NULL;
    }
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

// printing binary tree in preorder
void print(node *root) {
    if (root == NULL) {
        return;
    }
    // print the root first then the left and then the right subtree(children
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}

int main() {
    // build the root then the children
    // recursively build the left and right subtree
    node *root = buildTree();
    print(root);
    return 0;
}