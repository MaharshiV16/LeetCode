class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr(2 * n);
        int y = n;
        int x = 0;
        for(int i = 0; i < 2 * n; i++){
            if(i & 1){
                arr[i] = nums[y];
                y++;
            } else {
                arr[i] = nums[x];
                x++;
            }
        }
        return arr;
    }
};