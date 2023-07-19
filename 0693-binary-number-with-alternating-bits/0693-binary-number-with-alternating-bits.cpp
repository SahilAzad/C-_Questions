class Solution {
public:
    bool hasAlternatingBits(int n) {
       long long int num=(n^(n>>1));
       return !(num&(num+1));
    }
};