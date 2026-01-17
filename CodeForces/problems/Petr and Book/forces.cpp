#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    int pages[7];
    for (int i = 0; i < 7; i++) {
        cin >> pages[i];
    }
    
    int pages_read = 0;
    int day = 0;

    while (pages_read < n) {
        pages_read += pages[day % 7];
        day++;
    }
    
    int result = ((day - 1) % 7) + 1;
    cout << result << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}