class Solution {
    public boolean judgeCircle(String moves) {

      int j=0;
      int k=0;
      int i=0;
        while(i<moves.length()){
               
               if(moves.charAt(i)=='U'){
                     j++;
               }else if(moves.charAt(i)=='D'){
                      j--;
               }
               else if(moves.charAt(i)=='R'){
                      k++;
               }
               else if(moves.charAt(i)=='L'){
                      k--;
               }
               i++;
        }
        if(j==0 && k==0){
            return true;
        }
        return false;
        
    }
}