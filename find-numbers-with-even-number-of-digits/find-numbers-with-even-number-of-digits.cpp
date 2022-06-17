class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evens = 0;
        for(int i = 0; i < nums.size(); i++){
            int digits = 0;
            int x = nums[i];
            while(x != 0){
                digits++;
                x = x / 10;
            }
            if(digits % 2 == 0) evens++;
        }
        return evens;
    }
};