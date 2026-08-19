class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        vector<vector<string>>ans;

        for(auto x:strs)
        {
            string temp=x;
            sort(x.begin(), x.end());
            mpp[x].push_back(temp);
        }

        for(auto a:mpp )
        {
            vector<string>temp=a.second;
            ans.push_back(temp);
        }
        
        return ans;
    }
};