class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "")
            return 0;
        int a = haystack.find(needle);
        return a;
    }
};