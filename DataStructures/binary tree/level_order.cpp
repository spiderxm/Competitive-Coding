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

void print_kth_level(node *root, int k) {
    if (root == NULL) {
        return;
    }
    if (k == 1) {
        cout << root->data << "  ";
        return;
    }
    print_kth_level(root->left, k - 1);
    print_kth_level(root->right, k - 1);
    return;
}

int height(node *root) {
    if (root == NULL) {
        return 0;
    }
    int left_tree_height = height(root->left);
    int right_tree_height = height(root->right);
    return max(left_tree_height, right_tree_height) + 1;
}

void print_All_level(node *root) {
    ll h = height(root);
    for (int i = 1; i <= h; ++i) {
        print_kth_level(root, i);
        cout << endl;
    }
}


int main() {
    node *root = buildTree();
    print_All_level(root);
    delete root;
    return 0;
}

