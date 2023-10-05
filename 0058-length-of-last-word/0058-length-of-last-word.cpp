class Solution {
public:
    int lengthOfLastWord(string s) {
        int a = s.length() - 1;
        int count = 0;
        if(s[a] == ' '){
            while(s[a] == ' '){
                a--;
            }
            while((s[a] != ' ') && (a>0)){
                count++;
                a--;
            }
        }
        else{
            while((s[a] != ' ') && (a>0)){
                count++;
                a--;
            }
        }
        if((a==0) && (s[a] != ' '))
            return count + 1;
        
        return count;
    }
};