class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = int(nums.size()) * 2;
        vector<int> arr(n);
        for(int i = 0; i <n/2; i++){
            arr[i] = nums[i];
        }
        for(int i = 0; i <n/2; i++){
            arr[i + n/2] = nums[i];
        }
        return arr;
    }
};