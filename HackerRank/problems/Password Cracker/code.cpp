#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'passwordCracker' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING_ARRAY passwords
 *  2. STRING loginAttempt
 */

string passwordCracker(vector<string> passwords, string loginAttempt) {
    int n = loginAttempt.length();
    vector<bool> dp(n + 1, false);
    vector<pair<int, string>> parent(n + 1, {-1, ""});
    
    dp[0] = true;
    
    for (int i = 1; i <= n; i++) {
        for (const string& password : passwords) {
            int len = password.length();
            if (i >= len && dp[i - len]) {
                if (loginAttempt.substr(i - len, len) == password) {
                    dp[i] = true;
                    parent[i] = {i - len, password};
                }
            }
        }
    }
    
    if (!dp[n]) {
        return "WRONG PASSWORD";
    }
    
    vector<string> result;
    int pos = n;
    while (pos > 0) {
        result.push_back(parent[pos].second);
        pos = parent[pos].first;
    }
    
    reverse(result.begin(), result.end());
    
    string answer;
    for (int i = 0; i < result.size(); i++) {
        if (i > 0) answer += " ";
        answer += result[i];
    }
    
    return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string passwords_temp_temp;
        getline(cin, passwords_temp_temp);

        vector<string> passwords_temp = split(rtrim(passwords_temp_temp));

        vector<string> passwords(n);

        for (int i = 0; i < n; i++) {
            string passwords_item = passwords_temp[i];

            passwords[i] = passwords_item;
        }

        string loginAttempt;
        getline(cin, loginAttempt);

        string result = passwordCracker(passwords, loginAttempt);

        fout << result << "\n";
    }

    fout.close();

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}