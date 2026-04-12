#include<iostream>
using namespace std;

void print_1_n(int n) {
    if (n == 0) {
        return;
    }
    print_1_n(n-1);
    cout << n << " ";
    cout << endl;
}

int main() {
    print_1_n(10);
}