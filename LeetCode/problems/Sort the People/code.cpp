// O(n^2)
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for (int i = 0; i < heights.size(); i++) {
            for (int j = i + 1; j < heights.size(); j++) {
                if (heights[i] < heights[j]) {
                    swap(heights[i], heights[j]);
                    swap(names[i], names[j]);
                }
            }
        }
        return names;
    }
};

// O(n log n)
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> people;
        for (int i = 0; i < names.size(); i++) {
            people.push_back({heights[i], names[i]});
        }

        sort(people.begin(), people.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
            return a.first > b.first;
        });

        for (int i = 0; i < people.size(); i++) {
            names[i] = people[i].second;
        }
        return names;
    }
};