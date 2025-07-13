#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, t; cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int num_of_books = 0;
    int left = 0, right = 0;
    int sum = 0;
    while (right < n) {
        sum += a[right];
        while (sum > t) {
            sum -= a[left];
            left++;
        }
        num_of_books = max(num_of_books, right - left + 1);
        right++;
    }

    cout << num_of_books << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}