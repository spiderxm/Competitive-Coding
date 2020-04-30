//
// Created by Mrigank Anand on 29/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<unordered_map>
#include <cstring>
#include <algorithm>

using namespace std;

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair

#include <algorithm>

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

class Student {
public:
    string firstname;
    string lastname;
    int rollno;

    Student(string a, string b, int c) {
        firstname = a;
        lastname = b;
        rollno = c;
    }

    bool operator==(const Student &s) const {
        return rollno == s.rollno ? true : false;
    }

};

class HashFn {
public:
    size_t operator()(const Student &s) const {
        return s.firstname.length() + s.lastname.length() + s.rollno;
    }
};

int main() {
    // unordered map
    // implementation of hash table
    // insertion deletion find in O(1) time on average
    unordered_map<string, int> a;
    a.insert(make_pair("banana", 12));
    a.insert(make_pair("mango", 20));
    a.insert(make_pair("apple", 30));
    ll n;
    cin >> n;
    while (n--) {
        int ab;
        string ba;
        cin >> ab >> ba;
        a.insert(mp(ba, ab));
    }
    for (auto p:a) {
        cout << p.first << " -> " << p.second << endl;
    }
    a.erase(a.begin());

    string finder;
    cin >> finder;
    auto t = a.find(finder);
    if (t->second == 30) {
        a.erase(finder);
    }
    for (auto p:a) {
        cout << p.first << " -> " << p.second << endl;
    }

    Student a1("mrigank", "anand", 1);
    Student a2("aman", "chauhan", 2);
    Student a3("shekhar", "motiyan", 3);
    Student a4("aman", "kapoor", 4);
    unordered_map<Student, int, HashFn> student_map;
    student_map[a1] = 100;
    student_map[a2] = 90;
    student_map[a3] = 99;
    student_map[a4] = 89;
    for (auto t:student_map) {
        cout << t.first.firstname << " " << t.first.lastname << " roll no. is " << t.first.rollno
             << " and his marks are: "
             << t.second << endl;
    }
    cout << student_map[a3] << endl;

    return 0;
}