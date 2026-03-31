class Solution {
      public void solve(int i,int j,int[][] matrix,int[][] mat){
                     for(int k=0;k<matrix[0].length;k++){
                        mat[i][k]=0;
                     }
                     for(int k=0;k<matrix.length;k++){
                        mat[k][j]=0;
                     }
      }
    public void setZeroes(int[][] matrix) {

    int n=matrix.length;
    int m=matrix[0].length;
    int[][] mat = new int[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           mat[i][j]=matrix[i][j];
        }
        
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                solve(i,j,matrix,mat);
            }
        }
        
    }
    

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                matrix[i][j]=mat[i][j];
        }
    }

        
    }
}