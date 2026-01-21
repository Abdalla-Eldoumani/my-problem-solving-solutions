class Solution {
public:
    string toBinary(int num, int length) {
        string binary = "";
        
        for (int i = length - 1; i >= 0 && num > 0; --i) {
            if (num % 2 == 1) {
                binary += '1';
            } else {
                binary += '0';
            }
            num /= 2;
        }

        reverse(binary.begin(), binary.end());
        return binary;
    }

    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        
        string yearBin = toBinary(year, 14);
        string monthBin = toBinary(month, 4);
        string dayBin = toBinary(day, 5);

        return yearBin + "-" + monthBin + "-" + dayBin;
    }
};