class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(n==0)
            return false;
        else if(ceil(log2(n)/log2(4))==floor(log2(n)/log2(4)))
            return true;
        
        else
            return false;
        
    }
};