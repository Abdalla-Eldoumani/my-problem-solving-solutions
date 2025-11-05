#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        string s; cin >> s;
        
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        
        int countA = freq['A'], countB = freq['B'], countC = freq['C'];

        if (countB == countA + countC) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}