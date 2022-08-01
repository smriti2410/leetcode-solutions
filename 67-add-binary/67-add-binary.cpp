#include<bits/stdc++.h>
class Solution {
public:
    string addBinary(string a, string b) {
        
        string ans;
        
        int m=a.length()-1;
        int n=b.length()-1;
        
        int carry=0;
        
     while(m>=0||n>=0){
         int sum=carry;
         
        
          if(m>=0)
             sum+=a[m--]-'0';
         
          if(n>=0)
             sum+=b[n--]-'0';
        
         if(sum>1)
             carry=1;
         else
             carry=0; 
         ans+=to_string(sum%2);
         
     }
        if(carry)
            ans+=to_string(carry);
        
        
       reverse(ans.begin(),ans.end()); 
        
        return ans;
    }
    
};