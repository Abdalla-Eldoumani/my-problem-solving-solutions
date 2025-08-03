#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;

    unordered_map<string, int> freq;
    string s;

    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (freq.find(s) != freq.end()) {
            int count = ++freq[s];
            cout << s << count << '\n';
        } else {
            freq[s] = 0;
            cout << "OK\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}