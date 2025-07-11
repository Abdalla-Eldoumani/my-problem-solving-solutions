#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int s;
    unordered_set<int> colors;
    
    for (int i = 0; i < 4; ++i) {
        cin >> s;
        colors.insert(s);
    }

    cout << 4 - colors.size() << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}