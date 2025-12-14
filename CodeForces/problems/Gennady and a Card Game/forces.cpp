#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string input; cin >> input;
    
    for (int i = 0; i < 5; ++i) {
        string card; cin >> card;
        if (card[0] == input[0] || card[1] == input[1]) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}