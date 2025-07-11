#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    int kth_score = a[k - 1];
        
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] >= kth_score && a[i] > 0) {
            count++;
        }
    }
    
    cout << count << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}