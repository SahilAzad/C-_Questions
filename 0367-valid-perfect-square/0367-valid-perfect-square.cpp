class Solution {
public:
    bool isPerfectSquare(long int num) {
        bool ans =false;
        for( long int i=0;i<=num;i++){
            if(i*i==num){
                ans=true;
                break;
            }
        }
        return ans;
    }
};