class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mpp= {
            {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100},{'D',500},{'M',1000}
        };
        
        int num=0,current=0,next=0;
        for(int i=0; i<s.size(); i++)
        {
            current= mpp[s[i]];
            if(i+1<s.size())
            {
                next=mpp[s[i+1]];
            }
            else{
                next=0;
            }

            if(current<next)
            {
                num-=current;
            }
            else{
                num+=current;
            }
        }
        return num;
        
    }
};