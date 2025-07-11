#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<int> lucky_numbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
        
    for (int lucky : lucky_numbers) {
        if (n % lucky == 0) {
            cout << "YES\n";
            return;
        }
    }
    
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}