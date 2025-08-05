#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        int choices = 5;

        while (choices--) {
            int min_value = min(a, min(b, c));
            if (min_value == a) a++;
            else if (min_value == b) b++;
            else c++;
        }

        cout << a * b * c << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}