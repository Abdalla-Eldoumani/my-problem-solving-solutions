#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        int cnt2 = 0, cnt3 = 0;
        long long x = n;
        
        while (x % 2 == 0) {
            x /= 2;
            cnt2++;
        }

        while (x % 3 == 0) {
            x /= 3;
            cnt3++;
        }
        
        cout << (x != 1 || cnt2 > cnt3 ? -1 : (cnt3 - cnt2) + cnt3) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}