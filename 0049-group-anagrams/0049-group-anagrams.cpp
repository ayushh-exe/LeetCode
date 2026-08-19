class Solution {
public:
    bool anagram(string s1,string s2)
    {
        int n=s1.length(), m=s2.length();
        if(n==m)
        {
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());

            if(s1==s2)
            {
                return true;
            }
            else{
                return false;
            }
        }

        return false;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>> ans;
        vector<bool>visited(n,false);
        for(int i=0;i<n;i++)
        {
            vector<string>group;
            if(visited[i]){
                continue;
            }

            visited[i]=true;
            group.push_back(strs[i]);
            for(int j=i+1; j<n;j++)
            {
                if(!visited[j] && anagram(strs[i],strs[j]))
                {
                    group.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            ans.push_back(group);
            
        }

        return ans;
        
    }
};