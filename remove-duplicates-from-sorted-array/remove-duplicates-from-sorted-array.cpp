class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 1;
        int current = 0;
        while(current < nums.size()){
            if(nums[current] != nums[unique - 1]){
                swap(nums[current], nums[unique]);
                unique++;
                current++;
            } else {
                current++;
            }
        }
        return unique;
    }
};