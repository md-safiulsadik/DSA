#include<iostream>
using namespace std;

int sum_of_N(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum_of_N(n-1);
}

int main() {

    cout << sum_of_N(30) << endl;
    return 0;
}