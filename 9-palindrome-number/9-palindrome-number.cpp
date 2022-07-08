class Solution {
public:
    bool isPalindrome(int x) {
        if(x >= 0){
            long reversed = 0;
            long original = x;
            while(x){
                reversed *= 10;
                reversed += x % 10;
                x /= 10;
            }
            if(original == reversed) return true;
            return false;
        } else {
            return false;
        }
    }
};