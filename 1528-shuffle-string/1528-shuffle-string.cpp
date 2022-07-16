class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        char ans[s.size()];
        for(int i = 0; i < s.size(); i++){
            ans[indices[i]] = s[i];
        }
        string st = "";
        for(int i = 0; i < s.size(); i++){
            st+= ans[i];
        }
        return st;
    }
};