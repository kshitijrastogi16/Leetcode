class Solution {
public:
    int majorityElement(vector<int>& nums) {
        set <int> h(nums.begin(), nums.end());
        int c = 0;
        int b;
        for (int num : h){
            int a = count(nums.begin(), nums.end(), num);
            if (a > c){
                c = a;
                b = num;
            }
        }
        return b;
    }
};