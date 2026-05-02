class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        int d=nums[n-1];
        for(int i =0; i+k-1 < n; i++)
        {
            d=min(d,abs(nums[i+k-1]-nums[i]));
        }
        return d;
    }
};