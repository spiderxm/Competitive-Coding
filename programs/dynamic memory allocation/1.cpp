//
// Created by Mrigank Anand on 31/07/20.
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

int main() {
    // static allocation and dynamic allocation is there is c++
    // static memory -> compile time allocation
    // dynamic memory -> run time allocation
    int a[] = {0}; // static memory  allocation
    // it use stack memory
    // at the time of compilation of program symbol table is created
    // virtual addresses are assigned that will be used (sizes as well as memory to be used is fixed ) Mapping between virtual memory and real memory is just defined before the program execution
    // real memory is assigned just before the execution of the program
    // Advantages Fast  Disadvantages Less flexible


    // runtime memory allocation
    // allows to define memory requirements during runtime
    // it uses heap memory
    // heap memory is bigger in size
    // reuse is possible
    // new and delete are used  (allocation and de-allocation is in the hand of programmer)
    int *p = new int; // new int returns the address
    *p = 9; // assigning value to that memory location
    cout << p << endl;
    cout << *p << endl;
    int b[100]; //static allocation
    int *c = new int[100]; // dynamic allocation
    // c will be stored in static memory
    // c is pointer to the array
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    delete [] p;  // deleting the previously allocated heap memory
    p = new int[500];
    // memory leak is there in dynamic allocation if we dont delete previous elements and assign new elements then old elements will not be accessed and go under memory leak
    return 0;
}