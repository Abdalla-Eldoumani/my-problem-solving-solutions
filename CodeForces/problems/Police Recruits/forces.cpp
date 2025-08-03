#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, num_of_crimes = 0, number_of_officers = 0; cin >> n;

    while (n--) {
        int crime; cin >> crime;
        if (crime == -1) {
            if (num_of_crimes > 0) {
                --num_of_crimes;
            } else {
                ++number_of_officers;
            }
        } else {
            num_of_crimes += crime;
        }
    }

    cout << number_of_officers << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}