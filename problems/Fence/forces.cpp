#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) cin >> h[i];

    int min_sum = 0, curr_sum = 0, min_idx = 0;
    for (int i = 0; i < k; ++i) curr_sum += h[i];

    min_sum = curr_sum;

    for (int i = k; i < n; ++i) {
        curr_sum += h[i] - h[i - k];
        if (curr_sum < min_sum) {
            min_sum = curr_sum;
            min_idx = i - k + 1;
        }
    }

    cout << ++min_idx << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}