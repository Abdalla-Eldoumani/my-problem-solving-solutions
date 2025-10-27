#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        b = a;
        sort(b.begin(), b.end());
        
        int max1 = b[n - 1];
        int max2 = b[n - 2];
        int cnt_max1 = 0;
        for (int x : a) if (x == max1) ++cnt_max1;
        
        vector<int> res(n);
        for (int i = 0; i < n; ++i) {
            int other_max = (a[i] == max1 && cnt_max1 == 1) ? max2 : max1;
            res[i] = a[i] - other_max;
        }

        for (int i = 0; i < n; ++i) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}