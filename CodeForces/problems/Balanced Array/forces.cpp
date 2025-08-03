#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    
    while (t--) {
        int n; cin >> n;
        
        if ((n / 2) % 2 != 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            vector<int> res;
            int sum_even = 0, sum_odd = 0;
            
            for (int i = 1; i <= n / 2; ++i) {
                res.push_back(i * 2);
                sum_even += i * 2;
            }
            
            for (int i = 1; i < n / 2; ++i) {
                res.push_back(i * 2 - 1);
                sum_odd += i * 2 - 1;
            }
            
            res.push_back(sum_even - sum_odd);
            for (int i = 0; i < n; ++i) {
                cout << res[i] << ' ';
            }
            
            cout << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}