#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s; cin >> s;
    
    string target = "hello";

    int j = 0;
    for (int i = 0; i < s.size() && j < target.size(); ++i) {
        if (s[i] == target[j]) j++;
    }

    if (j == target.size()) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}