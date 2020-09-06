//
// Created by Mrigank Anand on 03/09/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define w() ll t; cin >> t; while(t--)
using namespace std;

template<typename t>
class node {
public:
    node *next;
    string key;
    t value;

    node(string key, t val) {
        this->key = key;
        value = val;
        next = NULL;
    }

    ~node() {
        if (next != NULL) {
            delete next;
        }
    }
};

template<typename t>
class HashTable {
    node<t> **table;
    int current_size;
    int table_size;
public:
    HashTable(int ts = 7) {
        table_size = ts;
        table = new node<t> *[7];
        current_size = 0;
        for (int i = 0; i < table_size; ++i) {
            table[i] = NULL;
        }
    }

    void insert(string key, t value) {

    }

    t search(string key) {

    }

    void erase(string key) {

    }
};

int main() {

    return 0;
}