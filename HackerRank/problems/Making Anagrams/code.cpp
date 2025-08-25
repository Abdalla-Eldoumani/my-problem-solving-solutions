#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'makingAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

int makingAnagrams(string s1, string s2) {
    vector<int> freq1(26, 0), freq2(26, 0);

    for (char c : s1) {
        freq1[c - 'a']++;
    }

    for (char c : s2) {
        freq2[c - 'a']++;
    }

    int deletions = 0;
    for (int i = 0; i < 26; ++i) {
        deletions += abs(freq1[i] - freq2[i]);
    }
    
    return deletions;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}