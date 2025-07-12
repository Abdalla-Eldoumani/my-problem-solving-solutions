#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string borze; cin >> borze;
    
    string result = "";
    int i = 0;
    
    while (i < borze.length()) {
        if (borze[i] == '.') {
            result += '0';
            i++;
        } else if (borze[i] == '-') {
            if (i + 1 < borze.length() && borze[i + 1] == '.') {
                result += '1';
                i += 2;
            } else if (i + 1 < borze.length() && borze[i + 1] == '-') {
                result += '2';
                i += 2;
            }
        }
    }
    
    cout << result << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}