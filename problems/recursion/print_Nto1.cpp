#include<iostream>
using namespace std;

void print_1_n(int n) {
    if (n == 0) {
        cout << endl;
        return;
    }
    cout << n << " ";
    print_1_n(n-1);
}

int main() {
    print_1_n(10);
}