class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
         long long  int ans=0;
        long int n=nums.size();
        for(long int i=1;i<=n;i++){
            if(n%i==0){
                ans=ans+(nums[i-1]*nums[i-1]);
            }
        }
        return ans ;
    }
};