// #include<iostream>  // input output library
// #include<math.h>

#include <bits/stdc++.h> // includes all the library
using namespace std;     // use std:: before empty function

void print1(int n) {

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}

int main() {

    print1(5);
    // int, long, long long, float, double
    // string and getline

    // string str2;
    // string str1;

    // cin >> str >> str1; // this will only peak-up anything before the space
    // cout << str1 << " " << str2 << "\n";

    // getline(cin, str1); // this peak the full input in console
    // cout << str1;

}
