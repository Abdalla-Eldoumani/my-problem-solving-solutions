#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int y, w; cin >> y >> w;

    int max_roll = max(y, w);

    int numerator = 6 - max_roll + 1;
    int denominator = 6;

    int common_divisor = __gcd(numerator, denominator);

    cout << numerator / common_divisor << '/' << denominator / common_divisor << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}