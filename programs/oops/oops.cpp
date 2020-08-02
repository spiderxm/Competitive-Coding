//
// Created by Mrigank Anand on 31/07/20.
//

// OBJECT ORIENTED PROGRAMMING (OOPs)
// Real world Entities => Objects in Program

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

//equivalent to defining a new datatype
class Car {
    // Class has data members and functions functions are related to the object
public: // public is a access specifier
    int weight;
    float price;
    int model_number;
    string name;

    float get_discounted_price(float x) {
        return float(price * float(1.0 - x));
    }
    void apply_discount(float x) {
        price = float(price * float(1.0 - x));
        cout << price;
    }
};

int main() {
    Car a;
    cout << "Size of car is : " << sizeof(a) << endl;
    cout << "Enter weight : ";
    cin >> a.weight;
    cout << "Enter price : ";
    cin >> a.price;
    cout << "Enter model number : ";
    cin >> a.model_number;
    cout << "Enter name : ";
    cin >> a.name;
    cout << "Weight is : " << a.weight << " Price is " << a.price << " Model number is " << a.model_number
         << " Name is " << a.name << endl;
    cout << a.get_discounted_price(.2);
    a.apply_discount(.3);

    cout << " Price is " << a.price;
    return 0;
}