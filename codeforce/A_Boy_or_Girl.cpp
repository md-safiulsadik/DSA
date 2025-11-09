#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string username;
    cin >> username;

    unordered_set<char> uni_chars(username.begin(), username.end());
    cout << (uni_chars.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;

    return 0;
}