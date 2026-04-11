class Solution {
    public int minimumDistance(int[] nums) {
        if(nums.length<3){
            return -1;
        }
       HashMap<Integer,ArrayList<Integer>>mp = new HashMap<>();

       for(int i=0;i<nums.length;i++){
            if(!mp.containsKey(nums[i])){
                mp.put(nums[i],new ArrayList<Integer>());   
            }
            mp.get(nums[i]).add(i);
       }
       int mini = Integer.MAX_VALUE;
       for(Map.Entry<Integer,ArrayList<Integer>>map:mp.entrySet()){
                        if(map.getValue().size()>=3){
                        
                            int j=map.getValue().size()-1;
                            while(j>=2){
                                mini=Math.min(
                                       mini,
                                       Math.abs(map.getValue().get(j)-map.getValue().get(j-1))+
                                       Math.abs(map.getValue().get(j-1)-map.getValue().get(j-2))+
                                       Math.abs(map.getValue().get(j-2)-map.getValue().get(j))


                                );
                            
                                j--;
                            }
                        }
       }
       return mini==Integer.MAX_VALUE?-1:mini;
    }
}