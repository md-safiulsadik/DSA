#include<iostream>
using namespace std;

int main() {
    string st;
    cin >> st;

    int seen[300] = {0};

    for (int i = 0; i < st.size(); i++) {
        if (seen[st[i]] != 1) {
            seen[st[i]]++;
        }
    }

    int dist_char = 0;

    for (int val : seen) {
        if (val == 1) dist_char++;
    } 


    if (dist_char % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    
    return 0;
}