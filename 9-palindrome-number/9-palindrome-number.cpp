class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        long temp=x;
        
        while(x>0){
            long digit=x%10;
            rev=rev*10+digit;
            x=x/10;
            
        }
        
        if(rev==temp)
            return true;
        
        else 
            return false;
    }
};