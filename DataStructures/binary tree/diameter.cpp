//
// Created by Mrigank Anand on 08/09/20.
//

//
// Created by Mrigank Anand on 07/09/20.
//

//
// Created by Mrigank Anand on 07/09/20.
//

//
// Created by Mrigank Anand on 07/09/20.
//

//
// Created by Mrigank Anand on 07/09/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

#define ll long long
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

// building the binary tree
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


int height(node *root) {
    if (root == NULL) {
        return 0;
    }
    int left_tree_height = height(root->left);
    int right_tree_height = height(root->right);
    return max(left_tree_height, right_tree_height) + 1;
}

// Complexity is O(n^2)
int diameter(node *root) {
    if (root == NULL) {
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    int op1 = h1 + h2 + 1;
    int op2 = diameter(root->left); // diameter can be in left subtree
    int op3 = diameter(root->right); // diameter can be in right subtree
    return max(op1, max(op2, op3));
}

int main() {
    node *root = buildTree();
    cout << diameter(root);
    delete root;
    return 0;
}

