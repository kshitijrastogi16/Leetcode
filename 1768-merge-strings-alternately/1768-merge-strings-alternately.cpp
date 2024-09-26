class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len = min(word1.size(), word2.size());
        string s;
        for (int i = 0; i < len; i++){
            s += word1[i];
            s += word2[i];
        }
        return s + word1.substr(len) + word2.substr(len);
    }
};