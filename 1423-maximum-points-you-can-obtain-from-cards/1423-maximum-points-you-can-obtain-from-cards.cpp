class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int curr = 0;
        for (int i = 0; i < k; i++) {
            curr += cardPoints[i];
        }
        int maxscore = curr;
        for (int i = 0; i < k; i++) {
            curr -= cardPoints[k - 1 - i];
            curr += cardPoints[n - 1 - i];
            maxscore = max(maxscore, curr);
        }
        return maxscore;
    }
};
