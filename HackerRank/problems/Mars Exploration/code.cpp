#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
    string signal = "SOS";

    int ans = 0;
    for (size_t i = 0; i < s.length(); i += 3) {
        for (size_t j = 0; j < 3; ++j) {
            if (s[i + j] != signal[j]) {
                ans++;
            }
        }
    }

    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}