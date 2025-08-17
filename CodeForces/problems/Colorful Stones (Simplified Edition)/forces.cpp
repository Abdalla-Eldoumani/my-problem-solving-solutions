#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s, t; cin >> s >> t;
    int pos = 0;
    
    for (int i = 0; i < t.size(); i++){
        if (t[i] == s[pos]){
            pos++;
        }
    }

    cout << pos + 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}