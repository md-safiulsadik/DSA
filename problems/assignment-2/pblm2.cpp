#include <bits/stdc++.h>
using namespace std;

struct item
{
    int potency;
    int toxicity;
    int quantity;
};

// global variable
int n, M;
vector<item> items;

int imp_value = INT_MAX; // for minimization
int memo[1000][1000];

int solve(int current_item, int rem_potency)
{
    /// base case
    if (rem_potency == 0)
        return 0;

    if (current_item == n)
        return imp_value;

    /// memoization
    if (memo[current_item][rem_potency] != -1)
        return memo[current_item][rem_potency];

    int ans = imp_value;

    /// decision: take k times or not take
    for (int k = 0; k <= items[current_item].quantity; k++)
    {
        int total_potency = k * items[current_item].potency;

        if (total_potency > rem_potency)
            break;

        int sub = solve(current_item + 1,
                        rem_potency - total_potency);

        if (sub != imp_value)
        {
            ans = min(ans,
                      sub + k * items[current_item].toxicity);
        }
    }

    memo[current_item][rem_potency] = ans;
    return ans;
}

int main()
{
    const double drive_count = 0.5;

    cin >> n >> M;

    for (int i = 0; i < n; i++)
    {
        struct item it;
        cin >> it.potency >> it.toxicity >> it.quantity;
        items.push_back(it);
    }

    /// memo initialization
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= M; j++)
        {
            memo[i][j] = -1;
        }
    }

    int ans = solve(0, M);

    if (ans == imp_value)
        cout << -1 << endl;
    else
        cout << ans << endl;
}