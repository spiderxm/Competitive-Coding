
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

//O(N) complexity
bool height_balanced(node *root) {
    if (root == NULL) {
        return true;
    }
    int left_subtree = height(root->left);
    int right_subtree = height(root->right);
    if (abs(left_subtree - right_subtree) <= 1 && height_balanced(root->left) && height_balanced(root->right)) {
        return true;
    }
    return false;
}

int main() {
    node *root = NULL;
    root = buildTree();
    cout << height_balanced(root);
    return 0;
}
//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
