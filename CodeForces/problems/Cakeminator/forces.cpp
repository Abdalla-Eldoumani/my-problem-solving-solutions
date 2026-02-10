#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int r, c; cin >> r >> c;
    vector<string> grid(r);
    for (auto& row : grid) cin >> row;

    int cleanRows = 0, cleanCols = 0;
    for (int row = 0; row < r; ++row) {
        cleanRows += grid[row].find('S') == string::npos;
    }
    
    for (int col = 0; col < c; ++col) {
        bool hasStrawberry = false;
        for (int row = 0; row < r; ++row) {
            hasStrawberry |= grid[row][col] == 'S';
        }
        cleanCols += !hasStrawberry;
    }

    cout << cleanRows * c + cleanCols * r - cleanRows * cleanCols << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}