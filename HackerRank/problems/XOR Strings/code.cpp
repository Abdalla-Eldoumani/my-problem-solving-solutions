#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string strings_xor(string s, string t) {
    // Old bug filled ode
    // string res = "";
    // for(int i = 0; i < s.size(); i++) {
    //     if(s[i] = t[i])
    //         res = '0';
    //     else
    //         res = '1';
    // }
    
    // return res;

    // Updated fixed code
    string res = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] ^ t[i])
            res += '1';
        else
            res += '0';
    }

    return res;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << strings_xor(s, t) << endl;
    return 0;
}