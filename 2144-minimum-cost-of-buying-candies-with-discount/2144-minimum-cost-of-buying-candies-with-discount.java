class Solution {
    public int minimumCost(int[] cost) {
        
        Arrays.sort(cost);
        int ans=0;
         int cnt=0;
        for(int i=cost.length-1;i>=0;i--){

            if(cnt==2){
                cnt=0;
                continue;
            }
            ans+=cost[i];
            cnt++;     
        }
        return ans;
    }
}