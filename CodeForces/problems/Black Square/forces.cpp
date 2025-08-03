#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1, a2, a3, a4; cin >> a1 >> a2 >> a3 >> a4;
    string s; cin >> s;
    int ans = 0;
    
    for (char c : s) {
        switch (c)
            {
            case '1':
                ans += a1;
                break;
            case '2':
                ans += a2;
                break;
            case '3':
                ans += a3;
                break;
            case '4':
                ans += a4;
                break;
            }
    }
    
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}