class Solution {
    int [][][] dp;;
    public int solve(int[][] coins,int i,int j,int life){
             
            if(i==coins.length-1 && j==coins[0].length-1){
                if(coins[i][j]<0 && life>0){
                    return 0;
                }
                return coins[i][j];
            }
              if(i>=coins.length || j>=coins.length){
                return Integer.MIN_VALUE;
         }

        if (dp[i][j][life] != Integer.MIN_VALUE) {
            return dp[i][j][life];
        }

         
     int take = coins[i][j]+Math.max(solve(coins,i+1,j,life),solve(coins,i,j+1,life));
         
    int skip =Integer.MIN_VALUE;
    if(coins[i][j]<0 && life>0){
        int skipdown = solve(coins,i+1,j,life-1);
        int skipup   = solve(coins,i,j+1,life-1);
        skip = Math.max(skipdown,skipup);
    }

    return dp[i][j][life]=Math.max(take,skip);
    
         

    }
    public int maximumAmount(int[][] coins) {
        int m = coins.length;
        int  n = coins[0].length;
         dp = new int[m][n][3];

        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < 3; k++) {
                    dp[i][j][k] = Integer.MIN_VALUE;
                }
            }
        }
    

      return solve(coins,0,0,2);
        
    }
}