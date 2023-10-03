class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int a = nums.size();
        for (int i = 0 ; i < a ; i++){
            if(nums[i]!=val){
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }
};