class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        set<int> copy(nums.begin(), nums.end());
        int c = 0;
        for(int i : copy){
            int a = count(nums.begin(), nums.end(), i);
            if(a == 1){
                c = i;
                break;
            }
        }
        return c;
    }
};