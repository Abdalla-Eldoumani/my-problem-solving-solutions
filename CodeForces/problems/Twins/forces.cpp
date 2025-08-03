#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; ++i) cin >> coins[i];
    int total = accumulate(coins.begin(), coins.end(), 0);
    sort(coins.rbegin(), coins.rend());
    
    int my_sum = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
        my_sum += coins[i];
        ++cnt;
        if (my_sum > total - my_sum) {
            cout << cnt << '\n';
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}