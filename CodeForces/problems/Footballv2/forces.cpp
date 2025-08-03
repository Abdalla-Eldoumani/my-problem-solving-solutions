#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    unordered_map<string, int> freq;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        freq[s]++;
    }

    cout << max_element(freq.begin(), freq.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second < b.second;
    })->first << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}