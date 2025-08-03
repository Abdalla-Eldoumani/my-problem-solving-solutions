#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int current_length = 1;
    int max_length = 1;
    
    for (int i = 1; i < n; ++i) {
        if (a[i] >= a[i - 1]) {
            current_length++;
        } else {
            current_length = 1;
        }
        max_length = max(max_length, current_length);
    }

    cout << max_length << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}