//
// Created by Mrigank Anand on 31/07/20.
//
#include <bits/stdc++.h>

using namespace std;

int *fun() {
    int a[] = {1, 2, 3, 4, 5};
    cout << a << endl;
    cout << a[0] << endl;
    return a;
    // we should never return a local variable
}


int *fun1() {
    int *a = new int[5];
    a[0] = 11;
    a[1] = 2;
    cout << a << endl;
    cout << a[0] << endl;
    return a;
    // we should never return a local variable
}


int main() {
    int *b = fun1();
    cout << b << endl;
    cout << b[0] << endl;
    delete [] b;
    return 0;
}
