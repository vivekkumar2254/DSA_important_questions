class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
           long long  sum=0;
           for(int i=0;i<grid.size();i++){
              for(int j=0;j<grid[0].size();j++){
                sum+=grid[i][j];
              }
           }
     long long row=0,col=0;
        for(int i=0;i<grid.size()-1;i++){
               for(int j=0;j<grid[0].size();j++){
                   row+=grid[i][j];
               }
               if(row*2==sum){
                return 1;
               }
        }
          for(int i=0;i<grid[0].size()-1;i++){
               for(int j=0;j<grid.size();j++){
                   col+=grid[j][i];
               }
               if(col*2==sum){
                return 1;
               }
        }
return 0;
    }
};