class Solution {
public:
    int strStr(string haystack, string needle) {
         int n = haystack.length();
        int m = needle.length();
        
        
        int lps[m];
        
        lps[0] = 0;
        
        int i =1 ;
        int len = 0;
        
        while(i< m){
            if(needle[i] == needle[len]){
                len++;
                lps[i] = len;
                i++;
            }else {
                if(len == 0){
                    lps[i] = 0;
                    i++;
                }else {
                    len = lps[len - 1];
                }
            }
        }
        
        
         i =0 ;
        int j = 0;
        
        while(i < n){
            if(haystack[i] == needle[j]){
                i++;
                j++;
            }
            
            if(j == m){
                return i-j;
            }
            
            else if(i < n && haystack[i]!=needle[j]) {
                if(j == 0){
                    i++;
                }else {
                    j = lps[j - 1];
                }
            }
        }
        
        return -1;
    }
};