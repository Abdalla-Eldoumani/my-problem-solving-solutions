class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int, int> rankMap;
        vector<string> result(score.size());
        vector<int> sortedScores = score;
        sort(sortedScores.begin(), sortedScores.end(), greater<int>());

        for (int i = 0; i < sortedScores.size(); ++i) {
            rankMap[sortedScores[i]] = i + 1;
        }

        for (int i = 0; i < score.size(); ++i) {
            int rank = rankMap[score[i]];
            if (rank == 1) {
                result[i] = "Gold Medal";
            } else if (rank == 2) {
                result[i] = "Silver Medal";
            } else if (rank == 3) {
                result[i] = "Bronze Medal";
            } else {
                result[i] = to_string(rank);
            }
        }

        return result;
    }
};