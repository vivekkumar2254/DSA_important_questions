class Solution {
public:
    int M = 1e9+7;
    int dp[100001][2][3];
    int solve(int n,int ab,int la){
              if(ab>=2 ||la>=3){
                return 0;
              }
              if(n==0){
                return 1;
              }
              if(dp[n][ab][la]!=-1){
                return dp[n][ab][la];
              }

              int a = solve(n-1,ab+1,0)%M;
              int l = solve(n-1,ab,la+1)%M;
              int p = solve(n-1,ab,0)%M;
              return dp[n][ab][la]=(((a+l)%M)+p)%M;
    }
    int checkRecord(int n) {
       memset(dp,-1,sizeof(dp));
       return  solve(n,0,0);
        
    }
};