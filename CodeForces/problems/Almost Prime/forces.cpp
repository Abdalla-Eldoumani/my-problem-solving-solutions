#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<int> prime_count(n + 1, 0);

    for (int i = 2; i <= n; ++i) {
        if (prime_count[i] == 0) {
            for (int j = i; j <= n; j += i) {
                prime_count[j]++;
            }
        }
    }

    int count = 0;
    
    for (int i = 2; i <= n; ++i) {
        if (prime_count[i] == 2) count++;
    }

    cout << count << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}