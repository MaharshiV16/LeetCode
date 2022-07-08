class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        if(x < 2) return x;
        while(s < e){
            int m = (s + e) / 2;
             if(m <= x /m){
                s = m + 1;
            } else {
               e = m;
            }
        }
        return e - 1;
    }
};