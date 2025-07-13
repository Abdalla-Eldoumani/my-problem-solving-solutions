#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int seq = 0, max_seq = 0;

        while (n--) {
            int num; cin >> num;
            num == 0 ? seq++, max_seq = max(max_seq, seq) : seq = 0;
        }

        cout << max_seq << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}