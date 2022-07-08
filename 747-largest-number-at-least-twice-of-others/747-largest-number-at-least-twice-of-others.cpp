class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = INT_MIN;
        int max_index;
        int two_max = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > max){
                two_max = max;
                max = nums[i];
                max_index = i;
            } else if(two_max < nums[i] && nums[i] < max){
                two_max = nums[i];
            }
        }
        if(two_max * 2 <= max) return max_index;
        return -1;
    }
};