class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>result;
        long long current=1;
        result.push_back(1);
        for(int col=1;col<=rowIndex;col++)
        {
            current=current*(rowIndex-col+1)/col;
            result.push_back(current);
        }
        return result;
    }
};
       