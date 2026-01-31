#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    
    const int IMPOSSIBLE = 1e9;
    vector<int> minRestsEndingWith(3, IMPOSSIBLE);
    
    for (int day = 0; day < n; day++) {
        int availability; cin >> availability;
        
        bool contestAvailable = availability & 1;
        bool gymOpen = availability & 2;
        
        vector<int> updated(3, IMPOSSIBLE);
        
        if (day == 0) {
            updated[0] = 1;
            if (contestAvailable) updated[1] = 0;
            if (gymOpen) updated[2] = 0;
        } else {
            int bestPrevious = min({minRestsEndingWith[0], minRestsEndingWith[1], minRestsEndingWith[2]});
            updated[0] = bestPrevious + 1;
            
            if (contestAvailable) {
                updated[1] = min(minRestsEndingWith[0], minRestsEndingWith[2]);
            }
            if (gymOpen) {
                updated[2] = min(minRestsEndingWith[0], minRestsEndingWith[1]);
            }
        }
        
        minRestsEndingWith = updated;
    }
    
    cout << min({minRestsEndingWith[0], minRestsEndingWith[1], minRestsEndingWith[2]}) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}