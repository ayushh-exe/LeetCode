class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long n=nums.size();
        long long l=0,r=0,total=0,maxFreq=1;
        while (r < n)
        {
            total+=nums[r];
            while(nums[r]*(r-l+1) > total+k)        // (r-l+1)=WinSize
            {
                total-=nums[l];
                l++;
            }
            maxFreq=max(maxFreq,(r-l+1));
            r++;
        }
        return maxFreq;
        
    }
};