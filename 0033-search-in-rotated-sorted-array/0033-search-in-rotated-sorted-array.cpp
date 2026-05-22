class Solution {
    private:
        int cheak(vector<int>&ans){
            int i=0;
            int j=ans.size()-1;
            while(i<j){
                int mid=i+(j-i)/2;
                if(ans[mid]>ans[j]){
                    i=mid+1;
                }
                else{
                    j=mid;
                }
            }
            return j;
        }

       int binarySearch(int i,vector<int>&ans,int j,int target){
        int t=-1;
        while(i<=j){
         int mid=i+(j-i)/2;
          if(ans[mid]==target){
           t=mid;
           break;
          }
          else if(ans[mid]<target){
            i=mid+1;
          }
          else{
            j=mid-1;
          }
        }
        return t;
       }



public:
    int search(vector<int>& nums, int target) {
        
          int p_index = cheak(nums);
        
           int idx = binarySearch(0,nums,p_index-1,target);
            if(idx!=-1){
                return idx;
            }
            idx = binarySearch(p_index,nums,nums.size()-1,target);
           return idx;
    }
};