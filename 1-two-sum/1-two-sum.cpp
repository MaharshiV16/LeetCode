class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        set<pair<int,int>> newnum;
        for(int k = 0; k < nums.size(); k++){
            newnum.insert({nums[k], k});
        }
        auto start = newnum.begin();
        auto end = --newnum.end();
        while(start != end){
            if((*start).first + (*end).first == target){
                solution.emplace_back((*start).second);
                solution.emplace_back((*end).second);
                return solution;
            }
            else if((*start).first + (*end).first> target){
                end--;
                continue;
            }
            else if((*start).first + (*end).first < target){
                start++;
                continue;
            }
        }
        return solution;
    }
};