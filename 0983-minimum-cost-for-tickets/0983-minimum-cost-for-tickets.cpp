class Solution {
public:
     int solve(int i,vector<int>&days,vector<int>&costs,vector<int>&dp){
                if(i>=days.size()){
                    return 0;
                }
                if(dp[i]!=-1){
                    return dp[i];
                }
                int first_day = costs[0]+solve(i+1,days,costs,dp);
                int j = i;
                int maxday = days[i]+7;
                while(j<days.size() && days[j]<maxday){
                    j++;
                }
                int second_day = costs[1]+solve(j,days,costs,dp);
                j = i;
                maxday = days[i]+30;
                while(j<days.size() && days[j]<maxday){
                      j++;
                }
                int third_day = costs[2]+solve(j,days,costs,dp);
                return dp[i]=min({first_day,second_day,third_day});
     }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>dp(days.size()+1,-1);
        return solve(0,days,costs,dp);
    }
};