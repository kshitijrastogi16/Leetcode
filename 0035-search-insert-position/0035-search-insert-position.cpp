class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int a = nums.size();
        int l = 0;
        int r = a-1;
        while (l <= r){
            int mid = l + ((r-l)/2);
            if(nums[mid] > target){
                r = mid - 1;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else{
                return mid;
            }
        }
        return l;
    }
};