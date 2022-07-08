class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        while(num){
            v.push_back(num % 10);
            num /= 10;
        }
        sort(v.begin(), v.end());
        int num1 = 0;
        int num2 = 0;
        for(int i = 0; i < v.size() - 1; i += 2){
            num1 *= 10;
            num1 += v[i];
            num2 *= 10;
            num2 += v[i + 1];
        }
        return num1 + num2;
    }
};