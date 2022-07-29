class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = 0;
        bool flag = false;
        int count = 0;
        if(s.size() == 0)return 0;
        for(int j = s.size() - 1; j >= 0; j--){
            if(s[j] != ' '){
                flag = true;
                count++;
            }
            if(flag && s[j] == ' '){
                return count;
            }
        }
        return count;
    }
};