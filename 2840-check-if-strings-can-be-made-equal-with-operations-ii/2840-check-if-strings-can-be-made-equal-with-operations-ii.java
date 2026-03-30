class Solution {
    public boolean checkStrings(String s1, String s2) {
        
        int n=s1.length();

        int[] arr1 = new int[26];
        int[] arr2 = new int[26];

        for(int i=0;i<n;i++){

           if(i%2==0){
            arr1[s1.charAt(i)-'a']++;
            arr1[s2.charAt(i)-'a']--;
           }else{
            arr2[s1.charAt(i)-'a']++;
            arr2[s2.charAt(i)-'a']--;
           }
        }

        for(int i=0;i<26;i++){
               if(arr1[i]!=0 ||arr2[i]!=0){
                return false;
               }
        }

        return true;
        
    }
}