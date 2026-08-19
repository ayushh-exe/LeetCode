class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int cs=0;
        int n=nums.size();

        for(int i=0; i<n;i++)
        {

            cs+=nums[i];
            sum=max(sum,cs);
            if(cs<0)
            {
                cs=0;
            }
        }

        return sum;
        
    }
};