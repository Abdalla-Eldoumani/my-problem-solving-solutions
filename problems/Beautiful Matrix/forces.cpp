#include <bits/stdc++.h>
using namespace std;

void solve() {
    int oneCol = 0, oneRow = 0;
    
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            int num; cin >> num;
            if (num == 1) {
                oneRow = i;
                oneCol = j;
                break;
            }
        }
    }
    
    cout << abs(oneRow - 2) + abs(oneCol - 2) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}