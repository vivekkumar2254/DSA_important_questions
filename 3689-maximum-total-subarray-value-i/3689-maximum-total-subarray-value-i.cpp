class Solution {
public:
         long long maxTotalValue(vector<int>& nums, int k) {
          long long ans=0;

            long long  maxii = *max_element(nums.begin(),nums.end());
            long long  mini = *min_element(nums.begin(),nums.end());


      ans = maxii-mini;
       
        
    return (long long )k*(long long)ans;
    }
};