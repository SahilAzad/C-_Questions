class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int ones=0;
        int maximum=0;
        for (int i=0;i<n;i++){
            if(nums[i]==1){
                ones++;
                maximum=max(maximum,ones);
            }
            else{
                ones=0;
            }
        }
        
        return maximum;
    }
};