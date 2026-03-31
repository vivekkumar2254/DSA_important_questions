class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String,List<String>>mp = new HashMap<>();

        for(String i:strs){
            char[] ch = i.toCharArray();
            Arrays.sort(ch);
            String x = new String(ch);
            mp.computeIfAbsent(x,k->new ArrayList<>()).add(i);
        }

        List<List<String>>ans=new ArrayList<>();

         for(Map.Entry<String,List<String>>v:mp.entrySet()){
            ans.add(v.getValue());
         }


return ans;
    }
}