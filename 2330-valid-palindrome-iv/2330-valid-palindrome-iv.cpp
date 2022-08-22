class Solution {
public:
    
    bool makePalindrome(string s) {
        int l=0;
        int h =s.length()-1;
        int count=0;
        while(l<h){
            if(s[l++]!=s[h--])
                count++;
        }
      
        if(count>2)
            return false;
        else return true;
    }
};