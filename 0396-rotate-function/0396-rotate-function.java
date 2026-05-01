class Solution {
    public int maxRotateFunction(int[] nums) {
         int sum=0;
         int f=0;

          for(int i=0;i<nums.length;i++){ 
                sum+=nums[i];
                f+= i*nums[i];
          }
          int ans=f;
          for(int k=0;k<nums.length;k++){
            int nef = f+sum-nums.length*nums[nums.length-1-k];
            ans = Math.max(ans,nef);
            f = nef;
          }
        return ans;
    }
}