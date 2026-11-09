class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        return 0;
        
        long long currentmax=nums[0];
        long long currentmin=nums[0];
        long long maxproduct=nums[0];
        


        for(int index=1;index<n;index++)
        {
            long long currentvalue=nums[index];
            long long previousmax=currentmax;
            long long previousmin=currentmin;

            currentmax=max({currentvalue,previousmax*currentvalue,previousmin*currentvalue});
            currentmin=min({currentvalue,previousmax*currentvalue,previousmin*currentvalue});
            if(currentmax>maxproduct)
            maxproduct=currentmax;
        }
        return maxproduct;
    }
};
       