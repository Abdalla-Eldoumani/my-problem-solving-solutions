#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int kirito_strength, n; cin >> kirito_strength >> n;
    vector<pair<int, int>> monsters(n);
    for (int i = 0; i < n; ++i) {
        cin >> monsters[i].first >> monsters[i].second;
    }

    sort(monsters.begin(), monsters.end());
    
    for (const auto& monster : monsters) {
        if (kirito_strength <= monster.first) {
            cout << "NO\n";
            return;
        }
        
        kirito_strength += monster.second;
    }

    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}