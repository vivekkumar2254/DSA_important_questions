class Solution {
        public int solve(int n,int d){
                int temp = n;
                int count=0;
                while(temp!=0){
                       int num = temp%10;
                       if(num==d){
                        count++;
                       }
                       temp=temp/10;
                }
                return count;
        }
    public int countDigitOccurrences(int[] nums, int digit) {

         int cnt=0;
        for(int i=0;i<nums.length;i++){
               cnt+=solve(nums[i],digit);
        }
        return cnt;
        
    }
}