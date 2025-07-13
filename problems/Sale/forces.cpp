#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    sort(a.begin(), a.end());
    
    long long max_earn = 0;
    int cnt = 0;
    for (int i = 0; i < n && cnt < m; ++i) {
        a[i] < 0 ? max_earn += -a[i], ++cnt : 0;
    }
    
    cout << max_earn << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}