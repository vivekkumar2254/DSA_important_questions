class Solution {
      public Boolean issame(char [] word,String str,int i,int m){
           for(int j=0;j<m;j++){
            if(word[i]!=str.charAt(j)){
                return false;
            }
            i++;
           }
           return true;
      }
    public String generateString(String str1, String str2) {
        int n = str1.length();
        int m = str2.length();

        int N = m+n-1;
         char[] word = new char[N];
           for (int i = 0; i < N; i++) {
            word[i] = '$';
        }

        ArrayList<Boolean>arr = new ArrayList<>(Collections.nCopies(N,false));

        for(int i=0;i<n;i++){
            if(str1.charAt(i)=='T'){
             int idx = i;
             for(int j=0;j<m;j++){
                  if(word[idx]!='$' && word[idx]!=str2.charAt(j)){
                    return "";
                  }
                  word[idx]=str2.charAt(j);
                  idx++;
             }
        }
        }
        for(int i=0;i<N;i++){
            if(word[i]=='$'){
                word[i]='a';
                arr.set(i,true);
            }
        }

        for(int i=0;i<n;i++){
            if(str1.charAt(i)=='F'){
                if(issame(word,str2,i,m)){
                    boolean change = false;
                    for(int k=i+m-1;k>=i;k--){
                        if(arr.get(k)==true){
                        word[k]='b';
                        change=true;
                        break;
                    }
                    }
                     if(change==false){
                    return "";
                }
                }
               
            }
        }
        return new String(word);

    }
}