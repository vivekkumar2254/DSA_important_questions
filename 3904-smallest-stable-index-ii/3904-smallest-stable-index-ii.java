class Solution {
    public int firstStableIndex(int[] nums, int k) {

        int [] arr1 = new int[nums.length];
        int [] arr2 = new int[nums.length];
        int n = nums.length-1;
          arr1[0] = nums[0];
          arr2[n] = nums[n];
        
        for(int i=1;i<nums.length;i++){
              arr1[i] = Math.max(arr1[i-1],nums[i]); 
        }
        for(int i = n - 1; i >= 0; i--){
         arr2[i] = Math.min(arr2[i + 1], nums[i]);
          }
       
        for(int i=0;i<nums.length;i++){
            if((arr1[i]-arr2[i])<=k){
                return i;
            }
        }
        return -1;
        
    }
}