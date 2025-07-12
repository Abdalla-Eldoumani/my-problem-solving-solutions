#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string a, b; cin >> a >> b;
    
    for (size_t i = 0; i < a.size(); ++i) {
        cout << (a[i] != b[i] ? '1' : '0');
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}