class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n=nums.size();
        vector<vector<int>> ans;

        for(int i=0; i<n; i++)
        {
            if(i>0 && nums[i]==nums[i-1])           //duplicate value of i encountered
            {
                continue;
            }
            int j=i+1, k=n-1;

            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0) {j++;}        //we need to increase sum to reach 0
                else if(sum>0){k--;}    //we need to decrease sum to reach 0
                else                    //we found sum=0
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;

                    while(j<k && nums[j]==nums[j-1])    //duplicate value of j encountered
                    {
                        j++;
                    }
                }
            }
            
        }
        return ans;

    }
};