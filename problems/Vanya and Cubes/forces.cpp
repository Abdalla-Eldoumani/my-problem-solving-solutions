#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    int h = 0, cubes = 0;
    
    while (cubes <= n) {
        h++;
        cubes += (h * (h + 1)) / 2;
    }
    
    cout << --h << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}