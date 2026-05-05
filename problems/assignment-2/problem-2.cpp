#include<bits/stdc++.h>
using namespace std;

void marge(vector<int>& v, int st, int end) {
    int mid = (st + end) / 2;
    int leftSize = mid - st + 1;
    int rightSize = end - mid;

    vector<int> left(v.begin() + st, v.begin() + mid + 1);
    vector<int> right(v.begin() + (mid + 1), v.begin() + (end + 1));
    
    int i = 0;
    int j = 0;
    int k = st;

    while (i < leftSize && j < rightSize) {
        if (left[i] >= right[j]) {
            v[k++] = left[i++];
        } 
        else {
            v[k++] = right[j++];
        }
    }

    while (i < leftSize) {
        v[k++] = left[i++];
    }
    while (j < rightSize) {
        v[k++] = right[j++];
    }
}

void marge_sort(vector<int>& v, int st, int end) {
    if (st < end) {
        int mid = (st + end) / 2;

        marge_sort(v, st, mid);
        marge_sort(v, mid + 1, end);
        marge(v, st, end);
    }
}

int main() {
    int n;
    cin >> n;
        
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    marge_sort(v, 0, v.size() - 1);

    for (int it : v) {
        cout << it << " ";
    }
    cout << endl;
    
    return 0;
}