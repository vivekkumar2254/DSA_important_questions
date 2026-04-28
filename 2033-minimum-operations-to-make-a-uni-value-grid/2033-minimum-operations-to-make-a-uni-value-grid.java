class Solution {
    public int minOperations(int[][] grid, int x) {

        int[] arr = new int[grid.length * grid[0].length];
         int k=0;
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                    arr[k] = grid[i][j];
                    k++; 
            }
        }
         Arrays.sort(arr);
        int mid = arr[arr.length/2];
        int ans=0;

        for(int i:arr){
               if((mid-i)%x!=0){
                return -1;
               }
               ans+=Math.abs(mid-i)/x;
        }


        return ans;
    }
}