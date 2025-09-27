#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        string a; cin >> a;

        unordered_map<char, int> freq;
        for (char c : a) freq[c]++;

        int need = 0;
        for (char c = 'A'; c <= 'G'; c++) {
            if (freq[c] < m) need += (m - freq[c]);
        }
        
        cout << need << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}