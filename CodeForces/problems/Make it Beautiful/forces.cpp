#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &x : a) {
            cin >> x;
        }
        
        sort(a.begin(), a.end());

        int sum = 0;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (a[i] == sum) {
                ok = false;
                break;
            }
            sum += a[i];
        }

        if (ok) {
            cout << "YES\n";
            for (int x : a) {
                cout << x << ' ';
            }
            cout << '\n';
        } else {
            if (a[0] == a[n - 1]) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
                swap(a[0], a[n - 1]);
                for (int x : a) {
                    cout << x << ' ';
                }
                cout << '\n';
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}