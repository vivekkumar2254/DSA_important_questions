class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int active=0,inactive=0;
        bool isturn=true;
        for(int i=0;i<nums.size();i++){
             if(nums[i]%2!=0){
                   isturn=!isturn;
             }
             if(i%6==5){
                isturn=!isturn;
             }
             if(isturn){
                active+=nums[i];
             }else{
                inactive+=nums[i];
             }
        }
        return active-inactive; 
    }
};