#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        
        string s = to_string(n);
        
        if (s.length() >= 3 && s.substr(0, 2) == "10") {
            string exp_str = s.substr(2);
            
            if (exp_str[0] == '0' && exp_str.length() > 1) {
                cout << "NO\n";
            } else {
                int exp = stoi(exp_str);
                if (exp >= 2) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            }
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}