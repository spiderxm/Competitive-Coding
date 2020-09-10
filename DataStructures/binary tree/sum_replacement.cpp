
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

// BFS O(n)
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


int sum_replacement(node *root) {
// replace every node by sum of child nodes leaf nodes does not change
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return root->data;
    }
    // recursive part
    int leftSum = sum_replacement(root->left);
    int rightSum = sum_replacement(root->right);
    int temp = root->data;
    root->data = leftSum + rightSum;
    return temp + root->data;
}

int main() {
    node *root = NULL;
    root = buildTree();
    bfs(root);
    sum_replacement(root);
    bfs(root);
    return 0;
}
//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
