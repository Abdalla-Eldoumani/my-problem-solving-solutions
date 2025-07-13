#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[2 * n];
        
        for(int i = 0; i < 2 * n; i++) cin >> a[i];
        
        int odd = 0, even = 0;
        for(int i = 0; i < 2 * n; i++){
            a[i] % 2 == 0 ? even++ : odd++;
        }
        
        cout << (even == odd ? "Yes\n" : "No\n");
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}