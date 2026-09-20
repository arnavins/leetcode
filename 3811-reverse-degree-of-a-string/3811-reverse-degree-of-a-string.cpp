class Solution {
public:
    int reverseDegree(string s) {
        int n=s.length();
        int count=0;
        int product=1;
        for(int i=0;i<n;i++)
        {
            product=(i+1)*('z'-s[i]+1);
            count+=product;

        }
        return count;

        
    }
};