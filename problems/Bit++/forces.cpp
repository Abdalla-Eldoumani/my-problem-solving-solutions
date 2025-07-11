#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    auto x = 0;
    string s;
    
    for (size_t i = 0; i < n; ++i) {
        cin >> s;
        
        x += (s.find('+') != string::npos) ? 1 : -1;
    }
    
    cout << x << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}