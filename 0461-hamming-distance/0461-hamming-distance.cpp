class Solution {
public:
    int hammingDistance(int x, int y) {
        int a=x^y;
        long int ans=0;
        while(a!=0){
            int bits=a&1;
            if(bits==1){
                ans=ans+1;
            }
            a=a>>1;
        }
        return ans;
    }
};