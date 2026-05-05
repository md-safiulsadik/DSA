#include<bits/stdc++.h>
using namespace std;

struct Solution
{
    int startIndex;
    int endIndex;
    int sum;
};

Solution max_marge_step(vector<int> v, int st, int end) {
    int mid = (st + end) / 2;

    int leftIndex = -1;
    int leftSum = INT_MIN;
    int currSum = 0;

    for (int i = mid; i >= st; i--) {
        currSum += v[i];
        if (currSum > leftSum) {
            leftSum = currSum;
            leftIndex = i;
        }
    }

    int rightIndex = -1;
    int rightSum = INT_MIN;
    currSum = 0;

    for (int i = mid + 1; i <= end; i++) {
        currSum += v[i];
        if (currSum > rightSum) {
            rightSum = currSum;
            rightIndex = i;
        }
    }

    Solution s;
    s.startIndex = leftIndex;
    s.endIndex = rightIndex;
    s.sum = leftSum + rightSum;

    return s;
}

Solution max_sum_subarr(vector<int> v, int st, int end) {

    if (st == end) {
        Solution s;
        s.startIndex = st;
        s.endIndex = end;
        s.sum = v[st];
        return s;
    }

    int mid = (st + end) / 2;

    Solution leftSide = max_sum_subarr(v, st, mid);
    Solution rightSide = max_sum_subarr(v, mid + 1, end);
    Solution middlePart = max_marge_step(v, st, end);

    int maxS = max(leftSide.sum, max(rightSide.sum, middlePart.sum));

    if (maxS == leftSide.sum) return leftSide;
    else if (maxS == rightSide.sum) return rightSide;
    else return middlePart;
}

Solution min_marge_step(vector<int> v, int st, int end) {
    int mid = (st + end) / 2;

    int leftIndex = -1;
    int leftSum = INT_MAX;
    int currSum = 0;

    for (int i = mid; i >= st; i--) {
        currSum += v[i];
        if (currSum < leftSum) {
            leftSum = currSum;
            leftIndex = i;
        }
    }

    int rightIndex = -1;
    int rightSum = INT_MAX;
    currSum = 0;

    for (int i = mid + 1; i <= end; i++) {
        currSum += v[i];
        if (currSum < rightSum) {
            rightSum = currSum;
            rightIndex = i;
        }
    }

    Solution s;
    s.startIndex = leftIndex;
    s.endIndex = rightIndex;
    s.sum = leftSum + rightSum;

    return s;
}

Solution min_sum_subarr(vector<int> v, int st, int end) {

    if (st == end) {
        Solution s;
        s.startIndex = st;
        s.endIndex = end;
        s.sum = v[st];
        return s;
    }

    int mid = (st + end) / 2;

    Solution leftSide = min_sum_subarr(v, st, mid);
    Solution rightSide = min_sum_subarr(v, mid + 1, end);
    Solution middlePart = min_marge_step(v, st, end);

    int maxS = min(leftSide.sum, min(rightSide.sum, middlePart.sum));

    if (maxS == leftSide.sum) return leftSide;
    else if (maxS == rightSide.sum) return rightSide;
    else return middlePart;
}


int main() {
    int n;
    cin >> n;

    vector<int> hours;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        hours.push_back(temp);
    }
    
    Solution maxAns = max_sum_subarr(hours, 0, n-1);

    Solution minAns = min_sum_subarr(hours, 0, n-1);

    cout << maxAns.sum << endl;
    cout << minAns.sum << endl;

    return 0;
}