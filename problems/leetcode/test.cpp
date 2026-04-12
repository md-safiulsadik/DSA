#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        for (auto i : st) {
            cout << i << " ";
        } cout << endl;
    return st.size();
}

int main() {
    vector<int> v = {1,4,56,6,6,6,62,6,3,2,1};
    
    cout << removeDuplicates(v) << endl;    
    return 0;
}