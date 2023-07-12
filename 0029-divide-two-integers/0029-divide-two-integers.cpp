class Solution {
public:
    int divide(long int dividend, long int divisor) {
        if (divisor == 0) {
            return INT_MAX;
        }
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        bool is_neg=(dividend<0)^(divisor<0);
        dividend = abs(dividend);
        divisor = abs(divisor);
        long int Q=0;
       while (dividend >= divisor) {
            long long temp = divisor;
            long long power = 1;
            
            while (temp * 2 <= dividend) {
                temp *= 2;
                power *= 2;
            }
            
            dividend -= temp;
            Q += power;
        }
         if (is_neg) {
        Q =-Q;
    }
      return (int)Q;
    }
};