class Solution {

          int[][] directions = {{1,0}, {-1,0}, {0,1}, {0,-1}};
      public boolean cycle(int r,int c,int pr,int pc,char[][] grid,boolean[][] visit){

              if(visit[r][c]){
                return true;
              }
              visit[r][c]=true;
              for(int[] d :directions){
                int new_r = d[0]+r;
                int new_c = d[1]+c;
                if(new_r>=0 && new_r<grid.length && new_c>=0 && new_c<grid[0].length && grid[new_r][new_c]==grid[r][c]){
                           if(new_r==pr && new_c==pc){
                            continue;
                           }else{
                            if(cycle(new_r,new_c,r,c,grid,visit)){
                                return true;
                            }
                           }
                }
              }
return false;
      }
      
    public boolean containsCycle(char[][] grid) {
      boolean [][] visit = new boolean[grid.length][grid[0].length];

      for(int i=0;i<grid.length;i++){
          for(int j=0;j<grid[0].length;j++){
            if(!visit[i][j] && cycle(i,j,i,j,grid,visit)){
                return true;
            }
          }
      }
  return false;
    }
}