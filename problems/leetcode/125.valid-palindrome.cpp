#include<bits/stdc++.h>
#include<string.h>
using namespace std;
/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
private:
    bool check(string &s, int i) {
        if (i >= s.size() / 2) return true;
        if (s[i] != s[s.size() - i - 1]) return false;
        return check(s, i + 1);
    }
public:
    bool isPalindrome(string s) {
        return check(s, 0);
    }
};

int main() {
    Solution sol;
    string s = "aadam";
    cout << sol.isPalindrome(s) << endl;
}
// @lc code=end

