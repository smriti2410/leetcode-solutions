class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int> ans(2, -1);// creating answer vector{-1,-1}
        int start = 0, end = (int)nums.size() - 1; //start and end index for binary search at array is sorted 
        while(start <= end) { //1st occurance 
            int mid = start + (end-start)/2;//calc mid
            if(nums[mid] < target) start = mid+1; // mid val is less than target therefor target lies on right hence start index will start after mid and search right half array
            else {
                if(nums[mid] == target) ans[0] = mid;// if target == mid // 1st occurance found
                end = mid-1; // else search left half array by shifting end to mid-1
            }
        }
        start = 0, end = (int)nums.size() - 1;
        while(start <= end) {
            int mid = start + (end-start)/2;// 2nd occurance 
            if(nums[mid] > target) end = mid-1;
            else {
                if(nums[mid] == target) ans[1] = mid;
                start = mid+1;
            }
        }
        return ans;
    
    }
};