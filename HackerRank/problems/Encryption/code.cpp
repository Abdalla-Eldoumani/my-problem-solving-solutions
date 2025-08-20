#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
    int rows = floor(sqrt(s.size()));
    int cols = ceil(sqrt(s.size()));
    if (rows * cols < s.size()) rows++;

    string result = "";
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            if (i + j * cols < s.size()) {
                result += s[i + j * cols];
            }
        }
        
        result += " ";
    }

    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}