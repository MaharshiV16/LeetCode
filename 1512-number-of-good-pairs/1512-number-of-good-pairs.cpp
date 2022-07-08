class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n[101] = {0};
        for(int i = 0; i < nums.size(); i++){
            n[nums[i]]++;
        }
        int count = 0;
        for(int i = 0; i < 100; i++){
            count += (n[i] * (n[i] - 1)) / 2;
        }
        return count;
    }
};