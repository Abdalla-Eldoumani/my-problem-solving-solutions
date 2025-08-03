#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s; cin >> s;
    vector<int> numbers;
    for (int i = 0; i < s.length(); i += 2) numbers.push_back(s[i] - '0');

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i];
        if (i < numbers.size() - 1) cout << '+';
    }
    
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}