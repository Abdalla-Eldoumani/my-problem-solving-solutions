#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'timeInWords' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER h
 *  2. INTEGER m
 */

string timeInWords(int h, int m) {
    unordered_map<int, string> numbers = {
        {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"},
        {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"},
        {9, "nine"}, {10, "ten"}, {11, "eleven"}, {12, "twelve"},
        {13, "thirteen"}, {14, "fourteen"}, {15, "fifteen"},
        {16, "sixteen"}, {17, "seventeen"}, {18, "eighteen"},
        {19, "nineteen"}, {20, "twenty"}, {21, "twenty one"},
        {22, "twenty two"}, {23, "twenty three"}, {24, "twenty four"},
        {25, "twenty five"}, {26, "twenty six"}, {27, "twenty seven"},
        {28, "twenty eight"}, {29, "twenty nine"}
    };

    if (m == 0) {
        return numbers[h] + " o' clock";
    } else if (m == 15) {
        return "quarter past " + numbers[h];
    } else if (m == 30) {
        return "half past " + numbers[h];
    } else if (m == 45) {
        return "quarter to " + numbers[(h % 12) + 1];
    } else if (m < 30) {
        string minuteWord = (m == 1) ? " minute" : " minutes";
        return numbers[m] + minuteWord + " past " + numbers[h];
    } else {
        int minutesTo = 60 - m;
        string minuteWord = (minutesTo == 1) ? " minute" : " minutes";
        return numbers[minutesTo] + minuteWord + " to " + numbers[(h % 12) + 1];
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string h_temp;
    getline(cin, h_temp);

    int h = stoi(ltrim(rtrim(h_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    string result = timeInWords(h, m);

    fout << result << "\n";

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