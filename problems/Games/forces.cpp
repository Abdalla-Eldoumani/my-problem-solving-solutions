#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<int> home(n), guest(n);
    unordered_map<int, int> guest_freq;
    
    for (int i = 0; i < n; ++i) {
        cin >> home[i] >> guest[i];
        guest_freq[guest[i]]++;
    }
    
    int count = 0;
    for (int i = 0; i < n; ++i) {
        count += guest_freq[home[i]];
    }
    
    cout << count << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}