class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int>mpp;
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        int cnt=1;
        for(auto &it:temp){
            if(mpp.find(it)==mpp.end()){
                mpp[it]=cnt;
                cnt++;
            }
        }
        for(int i =0; i<arr.size(); i++){
            arr[i]=mpp[arr[i]];
        }
        return arr;
        
    }
};