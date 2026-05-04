class Solution {
    public void rotate(int[][] matrix) {

        int n = matrix.length;
        int m = matrix[0].length;
        int [][] arr = new int[n][m];

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                   arr[i][j] = matrix[j][i];
            }
        }
        for(int i=0;i<n;i++){
              int [] a = arr[i];
               int j=0;
               int k=a.length-1;
               while(j<k){
                   int temp = a[j];
                   a[j]=a[k];
                   a[k]=temp;
                   j++;
                   k--;    
               }

        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                   matrix[i][j] = arr[i][j];
            }
        }
        
    }
}