#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;
vector<bool> is_prime(MAXN + 1, true);
vector<int> primes;

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= MAXN; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (long long j = (long long)i * i; j <= MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

inline bool isPerfectSquare(long long n) {
    long long root = sqrt(n);
    for (long long r = max(1LL, root - 1); r <= root + 1; ++r) {
        if (r * r == n) return true;
    }
    return false;
}

inline void solve() {
    int n; cin >> n;
    
    for (int i = 0; i < n; ++i) {
        long long x; cin >> x;
        
        if (!isPerfectSquare(x)) {
            cout << "NO\n";
            continue;
        }
        
        long long root = sqrt(x);
        
        if (root <= MAXN && is_prime[root]) {
            cout << "YES\n";
        } else if (root > MAXN) {
            bool prime = true;
            if (root < 2) prime = false;
            else {
                for (int p : primes) {
                    if ((long long)p * p > root) break;
                    if (root % p == 0) {
                        prime = false;
                        break;
                    }
                }
            }
            cout << (prime ? "YES" : "NO") << "\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    solve();
    return 0;
}