class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<vector<int>>matX(n,vector<int>(m,0));
        vector<vector<int>>matY(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    if(grid[i][j]=='X'){
                        matX[i][j]=1;
                    }
                    if(grid[i][j]=='Y'){
                        matY[i][j]=1;
                    }
                  
                  if(i>0){
                    matX[i][j]+=matX[i-1][j];
                     matY[i][j]+=matY[i-1][j];
                  }
                  if(j>0){
                     matX[i][j]+=matX[i][j-1];
                     matY[i][j]+=matY[i][j-1];
                  }
                  if(i>0 && j>0){
                     matX[i][j]-=matX[i-1][j-1];
                     matY[i][j]-=matY[i-1][j-1];
                  }
                  if(matX[i][j]==matY[i][j] && matX[i][j]>0){
                    cnt++;
                  }
            }
        }
        return cnt;
    }
};