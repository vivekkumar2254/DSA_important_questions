class Solution {
    public String decodeCiphertext(String encodedText, int rows) {

        if (rows == 1) return encodedText;

        int col = encodedText.length()/rows;
        char [][] mat = new char[rows][col];
         int k=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                mat[i][j] = encodedText.charAt(k);
                k++;
            }
        }
    StringBuilder ans = new StringBuilder();

        for(int k_=0;k_<col;k_++){
             int i = 0;
             int j = k_;
           while(i<rows && j<col){
                 ans.append(mat[i][j]);
                 i++;
                 j++;
                
           }
        }

          int i=ans.length()-1;
          while(ans.length()>0 && ans.charAt(i) == ' ' ){
                ans.deleteCharAt(i);
                i--;
          }
        return ans.toString();
    }
}