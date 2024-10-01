class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int a = count(nums.begin(), nums.end(), 0);
        if (a == n){
            return 0;
        }
        int maxcount = 0;
        int count = 0;
        for(int i = 0; i < n - 1; i++){            
            if(nums[i] == 1 && nums[i+1] == 1){
                count++;
            }
            else{
                count = 0;
            }
            if(count > maxcount){
            maxcount = count;
            }
        }
        return maxcount + 1;
    }
};