#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    int mishka = 0, chris = 0;
    for (int i = 0; i < n; ++i) {
        int a, b; cin >> a >> b;
        a > b ? ++mishka : b > a ? ++chris : 0;
    }

    cout << (mishka > chris ? "Mishka\n" : chris > mishka ? "Chris\n" : "Friendship is magic!^^\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}