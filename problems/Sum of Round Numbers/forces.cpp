#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> round_numbers;
        int multiplier = 1;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                round_numbers.push_back(digit * multiplier);
            }
            n /= 10;
            multiplier *= 10;
        }
        
        cout << round_numbers.size() << '\n';
        
        for (size_t i = 0; i < round_numbers.size(); ++i) {
            cout << round_numbers[i] << (i == round_numbers.size() - 1 ? "" : " ");
        }

        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}