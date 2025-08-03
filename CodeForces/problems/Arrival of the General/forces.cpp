#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int max_h_val = 0; 
    int max_idx = -1;
    
    for (int i = 0; i < n; ++i) {
        if (a[i] > max_h_val) {
            max_h_val = a[i];
            max_idx = i; 
        }
    }

    int min_h_val = 101; 
    int min_idx = -1;

    for (int i = 0; i < n; ++i) {
        if (a[i] <= min_h_val) {
            min_h_val = a[i];
            min_idx = i;
        }
    }
    
    int swaps = 0;
    
    swaps += max_idx; 
    swaps += (n - 1 - min_idx);

    if (max_idx > min_idx) {
        swaps--;
    }

    cout << swaps << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}