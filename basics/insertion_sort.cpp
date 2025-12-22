#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 7;
    int arr[n] = {4, 6, 7, 8, 0, 4, 2};

    for (int i = 1; i < n; i++) {
        int key = i;
        int j = i - 1;
        
        while (key < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (auto i : arr) {
        cout << i << " ";
    } 
    cout << endl;
}