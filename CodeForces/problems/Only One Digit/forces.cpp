#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int x; cin >> x;
        set<int> digits_x;
        
        int temp = x;
        while (temp > 0) {
            digits_x.insert(temp % 10);
            temp /= 10;
        }

        int y = 0;
        while (true) {
            int temp_y = y;
            if (temp_y == 0) {
                if (digits_x.count(0)) {
                    cout << 0 << '\n';
                    break;
                }
            } else {
                bool found = false;
                while (temp_y > 0) {
                    if (digits_x.count(temp_y % 10)) {
                        found = true;
                        break;
                    }

                    temp_y /= 10;
                }

                if (found) {
                    cout << y << '\n';
                    break;
                }
            }
            ++y;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}