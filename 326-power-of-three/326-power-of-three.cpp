class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0)return false;
        int maxThree = pow(3,19);
        return maxThree % n == 0;
    }
};