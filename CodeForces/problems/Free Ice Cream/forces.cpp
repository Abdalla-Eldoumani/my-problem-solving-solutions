#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    long long n, x; cin >> n >> x;
    long long total = x;
    long long unhappy = 0;

    while (n--) {
        char c; cin >> c;
        long long d; cin >> d;
        if (c == '+') {
            total += d;
        } else {
            if (total >= d) {
                total -= d;
            } else {
                unhappy++;
            }
        }
    }

    cout << total << ' ' << unhappy << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}