class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
         sort(nums.begin(), nums.end());
         int j=0;
         int ans=0;
         for(int i=0;i<nums.size();i++){
               while((long long)nums[i]>(long long)nums[j]*k){
                j++;
               }
             ans=max(ans,i-j+1);
         }
         return nums.size()-ans;

    }
};