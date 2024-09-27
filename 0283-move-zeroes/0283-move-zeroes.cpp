class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a = nums.size();
        int z = count(nums.begin(), nums.end(),0);
        while(z!=0){
            for (int i = 0; i < a-1; i++){
                if (nums[i] == 0){
                    swap(nums[i], nums[i+1]);
                }
            }
        z--;
        }
    }
};