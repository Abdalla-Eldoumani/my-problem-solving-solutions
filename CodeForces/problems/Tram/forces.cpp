#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    int current_passengers = 0, max_capacity = 0;

    while (n--) {
        int a, b; cin >> a >> b;
        current_passengers -= a, current_passengers += b;
        max_capacity = max(max_capacity, current_passengers);
    }
    
    cout << max_capacity << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}