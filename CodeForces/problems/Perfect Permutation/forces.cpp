#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    
    bool possible = (n % 2 == 0);

    if (!possible) {
        cout << -1 << '\n';
        return;
    } else {
        vector<int> permutation(n);
    
        for (int i = 0; i < n; i += 2) {
            permutation[i] = i + 2;
            permutation[i + 1] = i + 1;
        }

        for (const int &value : permutation) {
            cout << value << ' ';
        }
        
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}