class Solution {
public:
    int reverse(int x) {
         long long int reverse=0;
        while(x){
            int last_digit=x%10;
            x=x/10;
            reverse=reverse*10+last_digit;
        }
        
        if(INT_MAX<reverse || reverse<INT_MIN){
        return 0;
        }
        return reverse;   

    }
};