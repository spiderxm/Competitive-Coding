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

int sum(node *root) {
    if (root == NULL) {
        return 0;
    }
    return root->data + sum(root->left) + sum(root->right);
}

int count(node *root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}

int diameter(node *root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + diameter(root->left) + diameter(root->right);
}

int main() {
    node *root = buildTree();
    cout << "Sum of tree element : " << sum(root) << endl;
    cout << "Number of nodes : " << count(root);
    delete root;
    return 0;
}
//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

