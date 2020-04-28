//
// Created by Mrigank Anand on 28/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<queue>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair

#include <algorithm>
#include <cstring>

#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

class fun {
public:
    bool operator()(char a) {
        cout << "having fun inside operator(" << a << ")";
    }
};

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

class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class PersonCompare {
public:
    bool operator()(Person a, Person b) {
        return a.age > b.age;
    }
};

int main() {
    // Based on heap
    // Olog(n) for push and pop
    // O(1) for top
    priority_queue<int> a;   // by default based on max_heap
    a.push(10);
    a.push(12);
    a.push(9);
    a.push(13);
    a.push(8);

    while (!a.empty()) {
        cout << a.top() << endl;
        a.pop();
    }
    priority_queue<int, vector<int>, greater<int>> ab;   // for min heap
    ab.push(10);
    ab.push(12);
    ab.push(9);
    ab.push(13);
    ab.push(8);

    while (!ab.empty()) {
        cout << ab.top() << endl;
        ab.pop();
    }

    // Functional object
    fun f;
    f('+');
    cout << endl;

    Person p1("mrigank", 18);
    Person p2("aman", 18);
    Person p3("shekhar", 17);

    priority_queue<Person, vector<Person>, PersonCompare> abc;
    // it takes class as a parameter
    abc.push(p1);
    abc.push(p2);
    abc.push(p3);
    while (!abc.empty()) {
        cout << abc.top().age << " " << abc.top().name << endl;
        abc.pop();
    }
    return 0;


}