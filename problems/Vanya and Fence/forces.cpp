#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, h; cin >> n >> h;
    int width = 0;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (a > h) width += 2;
        else width += 1;
    }

    cout << width << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}