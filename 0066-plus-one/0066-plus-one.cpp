class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int a = digits.size() - 1;
        while(a >= 0){
            if(digits[a] == 9){
                digits[a] = 0;
            }
            else{
                digits[a]++;
                return digits;
            }
        a--;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};