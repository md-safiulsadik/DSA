#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr, int n, int m) {
    if (n >= m) {
        return;
    }
    swap(arr[n], arr[m]);
    reverse(arr, n+1, m-1);
}   

int main() {
    vector<int> arr = {1,2,4,5,6,7};
    int size = arr.size();
    reverse(arr, 0, size-1);

    for (auto it : arr) {
        cout << it << " ";
    } cout << endl;
    
    return 0;
}