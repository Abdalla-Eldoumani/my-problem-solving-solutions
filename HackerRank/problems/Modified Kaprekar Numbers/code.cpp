#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(int p, int q) {
    vector<int> result;

    for (int n = p; n <= q; n++) {
        long long square = (long long) n * n;
        string squareStr = to_string(square);
        
        int d = to_string(n).length();
        
        int len = squareStr.length();
        string rightStr = squareStr.substr(len - d);
        string leftStr = (len > d) ? squareStr.substr(0, len - d) : "";
        
        int right = stoi(rightStr);
        int left = leftStr.empty() ? 0 : stoi(leftStr);
        
        if (left + right == n) {
            result.push_back(n);
        }
    }

    if (result.empty()) {
        cout << "INVALID RANGE\n";
    } else {
        for (int i = 0; i < result.size(); i++) {
            if (i > 0) cout << " ";
            cout << result[i];
        }
        cout << '\n';
    }
}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}