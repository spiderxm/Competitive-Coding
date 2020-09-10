#include <bits/stdc++.h>

using namespace std;

class node {
public:
    node *left;
    node *right;
    int data;

    node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *insertinBST(node *root, int i) {

    if (root == NULL) {
        return new node(i);
    }

    if (i <= root->data) {
        root->left = insertinBST(root->left, i);
    }

    if (i >= root->data) {
        root->right = insertinBST(root->right, i);
    }

    return root;
}

node *build() {
    int d;
    cin >> d;
    node *root = NULL;
    while (d != -1) {
        root = insertinBST(root, d);
        cin >> d;
    }
    return root;
}

void bfs(node *root) {
    queue<node *> q; // queue to type node*
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        node *f = q.front();
        if (f == NULL) {
            cout << endl;
            q.pop();
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << f->data << "  ";
            q.pop();
            if (f->left) {
                q.push(f->left);
            }
            if (f->right) {
                q.push(f->right);
            }
        }
    }
}

void InOrder(node *root) {
    if (root == NULL) {
        return;
    }
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

void deletion(node *root) {

}


// search in binary search tree
bool present(node *root, int key) {
    if (root == NULL) {
        return false;
    }
    if (root->data == key) {
        return true;
    }
    if (root->data >= key) {
        return present(root->left, key);
    }
    if (root->data < key) {
        return present(root->right, key);
    }
}

int main() {
    node *root = NULL;
    root = build();
    InOrder(root);
    cout << endl;
    bfs(root);
    delete (root);
    cout << present(root, 1) << endl;

    return 0;
}

//5 3 7 1 6 8 -1