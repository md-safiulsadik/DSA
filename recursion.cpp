#include<bits/stdc++.h>
using namespace std;
/*
- Numbers from 1to n
- Sum of First nNumbers 
- Factorial
- Fibonacci
- Sum of Digits
- GCD – Euclid’s Algorithm
- Linear Search
- Array Printing and Addition (Array Sum)
*/

int sum_from_1toN(int n) {
    int sum = 0;

    if (n == 0) return 0;
    sum = n + sum_from_1toN(n-1);

    return sum;
}

int sum_of_num(int n) {
    int sum = 0;
    
    if (n == 0) return 0;
    sum = (n % 10) + sum_of_num(n / 10);

    return sum;
}

int main() {

    // cout << sum_from_1toN(5) << endl;
    cout << sum_of_num(55) << endl;

    return 0;
}