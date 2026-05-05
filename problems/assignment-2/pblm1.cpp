#include <bits/stdc++.h>
using namespace std;

struct item {
    int weight;
    int value;
};

int n;
vector<item> items;

double memo[1005][1005];
bool vis[1005][1005];

double solve(int current_item, int rem_weight) {

    if(current_item == n) return 0;

    if(vis[current_item][rem_weight])
        return memo[current_item][rem_weight];

    vis[current_item][rem_weight] = true;

    double not_taken = solve(current_item + 1, rem_weight);

    double taken = -1e18;

    if(rem_weight >= items[current_item].weight) {
        taken = items[current_item].value +
                solve(current_item + 1,
                      rem_weight - items[current_item].weight);
    }

    return memo[current_item][rem_weight] = max(taken, not_taken);
}

int main() {

    int C, F;
    cin >> n >> C >> F;

    items.resize(n);

    for(int i = 0; i < n; i++) {
        int V, W;
        cin >> V >> W;

        items[i].weight = W;
        items[i].value = V - (W * F); // 🔥 trick
    }

    cout << fixed << setprecision(2)
         << solve(0, C) << endl;
}