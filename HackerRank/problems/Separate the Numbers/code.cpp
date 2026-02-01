#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'separateNumbers' function below.
 *
 * The function accepts STRING s as parameter.
 */

void separateNumbers(string s) {
    for (int i = 0; i < s.length() / 2; ++i) {
        string firstNumStr = s.substr(0, i + 1);
        long long firstNum = stoll(firstNumStr);
        string constructedStr = firstNumStr;
        long long nextNum = firstNum + 1;

        while (constructedStr.length() < s.length()) {
            constructedStr += to_string(nextNum);
            nextNum++;
        }

        if (constructedStr == s) {
            cout << "YES " << firstNumStr << "\n";
            return;
        }
    }

    cout << "NO\n";
}

int main()
{
    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        separateNumbers(s);
    }

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