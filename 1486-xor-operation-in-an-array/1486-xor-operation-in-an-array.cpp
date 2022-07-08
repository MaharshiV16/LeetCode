class Solution {
public:
    int xorOperation(int n, int start) {
        int v[n];
        int res = 0;
        for(int i = 0; i < n; i++){
            v[i] = start + 2 * i;
            res ^= v[i];
        }
        return res;
    }
};