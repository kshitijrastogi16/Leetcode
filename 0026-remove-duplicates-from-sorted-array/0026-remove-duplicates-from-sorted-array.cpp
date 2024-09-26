class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> a(nums.begin(), nums.end()); 
        int count = 0;
        int i = 0;
        for (auto it = a.begin(); it != a.end(); ++it){
            count++;
            nums[i] = *it;
            i++;
        }
        return count;
    }
};