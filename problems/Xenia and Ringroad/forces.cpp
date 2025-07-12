#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, m; cin >> n >> m;

    long long total_time = 0;
    int current_house = 1;
    for (int i = 0; i < m; ++i) {
        int target_house; cin >> target_house;
        if (target_house >= current_house) total_time += target_house - current_house;
        else total_time += n - current_house + target_house;
        current_house = target_house;
    }
    
    cout << total_time << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}