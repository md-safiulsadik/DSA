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
    if (n == 0) return 0;

    return n + sum_from_1toN(n-1);
}

int sum_of_num(int n) {
    if (n == 0) return 0;

    return (n % 10) + sum_of_num(n / 10);

}

int factorial(int n) {
    if (n == 0) return 1;
    
    return n * factorial(n - 1);
}


void printArr(int arr[], int n, int i) {
    if (i == n) return;

    cout << arr[i] << " ";
    return printArr(arr, n, i+1);
}

int linearSearch(int arr[], int i, int n, int key) {
    if (i == n) return -1;
    if (arr[i] == key) return i;

    return linearSearch(arr, i+1, n, key);
} 

int gcd(int a, int b) {
    if (b == 0) return a;

    return gcd(b, a % b);
}


int fibonacci(int n) {
    if (n <= 1) return n;
    
    return fibonacci(n-1) + fibonacci(n-2);
}


int main() {

    int arr[] = {1, 6, 7, 2, 4, 0, 9};

    // cout << sum_from_1toN(5) << endl;
    // cout << sum_of_num(555105) << endl;
    // cout << factorial(5) << endl;
    // printArr(arr, 7, 0); cout << endl;
    // cout << "found at index: " << linearSearch(arr, 0, 7, 0) << endl;
    // cout << gcd(48, 18) << endl;

    cout << fibonacci(4) << endl;

    return 0;
}