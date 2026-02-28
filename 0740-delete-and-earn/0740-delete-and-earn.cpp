class Solution {
public:
   int solve(vector<int>& nums, int i, vector<int>& dp) {
    if (i >= nums.size()) {
        return 0;
    }

    if (dp[i] != -1) {
        return dp[i];
    }

    
    int nextIndex = upper_bound(nums.begin(), nums.end(), nums[i]) - nums.begin();

    int count = nextIndex - i;
    int take = count * nums[i];

    
    int skipIndex = upper_bound(nums.begin(), nums.end(), nums[i] + 1) - nums.begin();

    take += solve(nums, skipIndex, dp);

    int ignore = solve(nums, i + 1, dp);

    return dp[i] = max(take, ignore);
}
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>dp(nums.size()+1,-1);
        return solve(nums,0,dp);
        
    }
};