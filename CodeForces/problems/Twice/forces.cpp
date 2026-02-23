#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }

        int score = 0;
        for (auto& f : freq) {
            score += f.second / 2;
        }

        cout << score << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}