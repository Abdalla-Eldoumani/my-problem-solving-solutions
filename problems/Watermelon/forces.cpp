#include <bits/stdc++.h>
using namespace std;

void solve() {
    int w; cin >> w;
    if (w % 2 == 0 && w > 2) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}