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

void print_post_order(node *root) {
    if (root == NULL) {
        return;
    }
    print_post_order(root->left);
    print_post_order(root->right);
    cout << root->data << " ";

}


int main() {
    node *root = buildTree();
    print_post_order(root);
    delete root;
    return 0;
}