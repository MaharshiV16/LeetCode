class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        while(s <= e){
            int m = (s + e) / 2;
            if(nums[m] == target){
                return m;
            } else if(nums[m] < target){
                s = m + 1;
            } else if(nums[m] > target){
                e = m - 1;
            }
        }
        return s;
    }
};