//
// Created by Mrigank Anand on 28/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<list>
#include <algorithm>
#include <forward_list>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

ll pow(ll a, ll b) {
    ll ans = 1;
    while (b > 0) {
        if (b & 1) {
            ans = ans * a;
        }
        b = b >> 1;
        a = a * a;
    }
    return ans;
}

using namespace std;

int main() {
    boost;
    //List corresponds to doubly linked list
    //its useful because we can delete from middle in O(1) time
    list<int> a;
    /*
     * push_back
     * push_front
     * pop_back
     * pop_front
     * erase
     * insert
     * remove
     */
    a.push_back(12);
    a.push_back(100);
    a.push_back(18);
    a.push_front(1);
    a.push_back(99);
    a.push_front(2);
    for (auto t:a) {
        cout << t << " ";
    }
    cout << endl;
    a.pop_back();
    a.pop_front();
    for (auto t:a) {
        cout << t << " ";
    }
    cout << endl;
    a.sort();
    a.reverse();
    for (auto t:a) {
        cout << t << " ";
    }
    cout << endl;
    cout << a.front() << " " << a.back() << endl;

    a.push_front(21);
    a.push_back(14);
    a.push_back(45);
    a.remove(21);
    for (auto t:a) {
        cout << t << " ";
    }
    cout << endl;
    auto it = a.begin();
    it++;
    it++;
    a.erase(it);
    for (auto t:a) {
        cout << t << " ";
    }
    cout << endl;
    auto it2 = a.begin();
    it2++;
    a.insert(it2, 300);
    for (auto t:a) {
        cout << t << " ";
    }
    cout << endl;
    forward_list<int> b; // singly linked list
    //they are more efficient then doubly linked list
    b.push_front(12);
    b.push_front(20);
    b.push_front(11);
    b.push_front(2);
    b.sort();
    b.reverse();
    b.pop_front();
    for (int y: b) {
        cout << y << " ";
    }
    cout << endl;
    auto it3 = b.front();
    it3++;
    b.remove(it3);
    b.push_front(90);
    b.push_front(2);
    for (int y: b) {
        cout << y << " ";
    }
    cout << endl;
    b.assign({1, 2, 3, 4});
    for (int y: b) {
        cout << y << " ";
    }
    cout << endl;

    b.insert_after(b.begin(),{2,3,4});
    for (int y: b) {
        cout << y << " ";
    }
    cout << endl;
    cout << *b.begin() << " "<< b.front();
    cout << endl;
    cout << b.max_size();
    b.emplace_after(b.begin());
    b.emplace_front(126);
    cout << endl;
    for (int y: b) {
        cout << y << " ";
    }
    cout << endl;

    auto it4 = a.begin();
    it4 = it4 + 3;
    cout << *it4;

    cout << *it4;

    return 0;
}