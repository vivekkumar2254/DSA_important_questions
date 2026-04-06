class Solution {
    public int robotSim(int[] commands, int[][] obstacles) {

                int x = 0;
                int y=  0;
                int ans=0;
          HashSet<String>st = new HashSet<>();

          for(int i=0;i<obstacles.length;i++){
                  int i_x = obstacles[i][0];
                  int i_y = obstacles[i][1];
                  String s = i_x+"_"+i_y;

                  st.add(s);
          }
        int [] dir = {0,1};
        for(int i=0;i<commands.length;i++){
                if(commands[i]==-2){
                    dir = new int[]{-dir[1],dir[0]};
                }
                else if(commands[i]==-1){
                    dir = new int[]{dir[1],-dir[0]};
                }else{
                       for(int  j=0;j<commands[i];j++){
                                int newx = x+dir[0];
                                int newy = y+dir[1];
                                String p = newx+"_"+newy;

                                if(st.contains(p)){
                                    break;
                                }
                        x = newx;
                       y = newy;
                       }
                      
                }
                ans=Math.max(ans,x*x+y*y);
        }
        return ans;
    }
}