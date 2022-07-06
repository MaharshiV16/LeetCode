class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_sum = INT_MIN;
        for(int i = 0; i <  accounts.size(); i++){
            int cur_sum = 0;
            for(int j = 0; j < accounts[i].size(); j++){
                cur_sum += accounts[i][j];
            }
            if(cur_sum > max_sum){
                max_sum = cur_sum;
            }
        }
        return max_sum;
    }
};