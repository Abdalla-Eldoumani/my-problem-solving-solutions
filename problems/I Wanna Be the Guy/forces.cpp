#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, p, level; cin >> n;
    bitset<101> canPass;
    
    for (int i = 0; i < 2; ++i) {
        cin >> p;
        for (int j = 0; j < p; ++j) {
            cin >> level;
            canPass[level] = 1;
        }
    }

    cout << (canPass.count() == n ? "I become the guy." : "Oh, my keyboard!") << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}