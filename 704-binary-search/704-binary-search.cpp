class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int ans;
        
        int first=0;
        int last=nums.size()-1;
        
        int mid=(first+last)/2;
        
        while(first<=last)
        {
            if(nums[mid]<target)
               first=mid+1;
            
            else if(nums[mid]>target)
             last=mid-1;
            
            else{
                ans=mid;
                break;}
                
                mid=(first+last)/2;
                
                
        
        }
            
            if(first>last)
                return -1;
            
    return ans;
        
        
    }
};