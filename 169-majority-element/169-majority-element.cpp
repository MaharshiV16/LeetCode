class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            if(m.find(nums[i]) == m.end()){
                m[nums[i]] = 1;
            } else {
                m[nums[i]]++;
            }
        }
        for(auto value: m){
            if(value.second > int(nums.size()) / 2) {
                return value.first;
            }
        }
        return -1;
    }
};