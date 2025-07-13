#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }

    vector<int> one, two, three;
    for (int i = 0; i < n; ++i) {
        if (t[i] == 1) one.push_back(i + 1);
        else if (t[i] == 2) two.push_back(i + 1);
        else if (t[i] == 3) three.push_back(i + 1);
    }

    int teams = min({one.size(), two.size(), three.size()});

    cout << teams << '\n';
    for (int i = 0; i < teams; ++i) {
        cout << one[i] << ' ' << two[i] << ' ' << three[i] << '\n';
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}