#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    const string MEOW_SEQUENCE = "meow";

    int t; cin >> t;
    while (t--) {
        int length; string sound;
        cin >> length >> sound;

        int phaseIndex = 0;
        bool isValidMeow = true;

        for (int position = 0; position < length && isValidMeow; position++) {
            char lowered = tolower(sound[position]);

            if (phaseIndex < 4 && lowered == MEOW_SEQUENCE[phaseIndex]) {
                while (position + 1 < length && tolower(sound[position + 1]) == MEOW_SEQUENCE[phaseIndex]) {
                    position++;
                }
                phaseIndex++;
            } else {
                isValidMeow = false;
            }
        }

        cout << (isValidMeow && phaseIndex == 4 ? "YES" : "NO") << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}