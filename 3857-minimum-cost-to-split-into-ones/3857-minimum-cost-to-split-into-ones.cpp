class Solution {
public:
    int solve(int n){
             if(n==1){
                return 0;
             }
               int a = n / 2;
               int b = n - (n / 2);

            return a*b +solve(a)+solve(b);

    }
    int minCost(int n) {
        return solve(n);
    }
};