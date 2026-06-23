#include<bits/stdc++.h>
class Solution {
public:
    int reverse(int x) {
        int num=0;
        while(x!=0)
        {
            int last_digit=x%10;
            if(num > INT_MAX/10 || num < INT_MIN/10)
                return 0;

            if(num == INT_MAX/10 && last_digit > 7)
                return 0;

            if(num == INT_MIN/10 && last_digit < -8)
                return 0;

            num=num*10+last_digit;
            x=x/10;
            
        }

        return num;
        
    }
};