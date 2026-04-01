class Solution {
    public List<Integer> survivedRobotsHealths(int[] positions, int[] healths, String directions) {
         int n = positions.length;
         Integer[] arr = new Integer[n];
         for(int i=0;i<n;i++){
            arr[i]=i;
         }

        Arrays.sort(arr,(i,j)->Integer.compare(positions[i],positions[j]));

        List<Integer>ans = new ArrayList<>();
        Stack<Integer>st = new Stack<>();
        for(int curr:arr){
              if(directions.charAt(curr)=='R'){
                  st.push(curr);
              }else{
                      while(!st.empty() && healths[curr]>0){
                        int top_i = st.pop();
                    

                        if(healths[top_i]>healths[curr]){
                            healths[top_i]--;
                            healths[curr]=0;
                            st.push(top_i);
                        }else if(healths[top_i]<healths[curr]){
                            healths[curr]-=1;
                            healths[top_i]=0;
                        }else{
                            healths[top_i]=0;
                            healths[curr]=0;

                        }
                      }
              }
        }
        for(int i=0;i<n;i++){
        if(healths[i]>0){
            ans.add(healths[i]);
        }
        }
return ans;
    }
}