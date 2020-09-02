//
// Created by Mrigank Anand on 02/09/20.
//

#include<iostream>
#include<list>

using namespace std;

int main() {
    list<int> a;
    int n;
    cin >> n;
    while (n != -1) {
        a.push_back(n);
        cin >> n;
    }
    int k;
    cin >> k;
    if (k > a.size()) {
        cout << -1;
    } else {
        auto itr = a.begin();
        int size = a.size() - k;
        while (size){
            itr++;
            size--;
        }
        cout << *itr;
    }
    return 0;
}