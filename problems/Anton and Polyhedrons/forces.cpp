#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    int total_value = 0;
    string s;
    
    for (int i = 0; i < n; ++i) {
        cin >> s;
        switch(s[0]) {
            case 'T': total_value += 4; break;
            case 'C': total_value += 6; break;
            case 'O': total_value += 8; break;
            case 'D': total_value += 12; break;
            case 'I': total_value += 20; break;
        }
    }
    
    cout << total_value << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}