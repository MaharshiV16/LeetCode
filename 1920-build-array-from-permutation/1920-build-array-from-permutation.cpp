class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = int(nums.size());
        vector<int> arr(n);
        for(int i = 0; i < n ; i++){
            arr[i] = nums[nums[i]];
        }
        return arr;
    }
};