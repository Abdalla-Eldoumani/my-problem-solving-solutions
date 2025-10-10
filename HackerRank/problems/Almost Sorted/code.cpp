#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'almostSorted' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void almostSorted(vector<int> arr) {
    vector<int> sorted = arr;
    sort(sorted.begin(), sorted.end());
    
    int n = arr.size();
    vector<int> diff_indices;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != sorted[i]) {
            diff_indices.push_back(i);
        }
    }
    
    if (diff_indices.empty()) {
        cout << "yes" << endl;
        return;
    }
    
    if (diff_indices.size() == 2) {
        cout << "yes" << endl;
        cout << "swap " << diff_indices[0] + 1 << " " << diff_indices[1] + 1 << endl;
        return;
    }
    
    int start = diff_indices.front();
    int end = diff_indices.back();
    
    reverse(arr.begin() + start, arr.begin() + end + 1);
    
    if (arr == sorted) {
        cout << "yes" << endl;
        cout << "reverse " << start + 1 << " " << end + 1 << endl;
    } else {
        cout << "no" << endl;
    }
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    almostSorted(arr);

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