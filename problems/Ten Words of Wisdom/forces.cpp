#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int max_val = -1;
        int max_val_idx = -1;
        
        for (int i = 1; i <= n; ++i) {
            int n1, n2; cin >> n1 >> n2;
            if (n1 > 10) continue;
            
            if (n1 <= 10 && n2 > max_val) {
                max_val = n2;
                max_val_idx = i;
            }
        }
        
        cout << max_val_idx << '\n';
    }
}