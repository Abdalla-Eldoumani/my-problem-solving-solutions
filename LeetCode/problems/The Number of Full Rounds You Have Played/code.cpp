class Solution {
public:
    int numberOfRounds(string loginTime, string logoutTime) {
        auto toMinutes = [](const string& t) {
            int h = stoi(t.substr(0, 2));
            int m = stoi(t.substr(3, 2));
            return h * 60 + m;
        };

        int login = toMinutes(loginTime);
        int logout = toMinutes(logoutTime);

        if (logout < login) logout += 24 * 60;

        int start = ((login + 14) / 15) * 15;
        int end = (logout / 15) * 15;

        if (end <= start) return 0;
        return (end - start) / 15;
    }
};