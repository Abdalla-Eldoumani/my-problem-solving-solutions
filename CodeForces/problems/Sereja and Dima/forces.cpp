#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; ++i) cin >> cards[i];

    int left = 0, right = n - 1;
    int sereja = 0, dima = 0;
    bool serejasTurn = true;
    
    while (left <= right) {
        int chosen = cards[left] > cards[right] ? cards[left++] : cards[right--];
        if (serejasTurn) sereja += chosen;
        else dima += chosen;
        serejasTurn = !serejasTurn;
    }
    
    cout << sereja << ' ' << dima << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}