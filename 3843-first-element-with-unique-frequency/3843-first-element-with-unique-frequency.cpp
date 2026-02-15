class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mp;
        unordered_map<int,int>mp2;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            mp2[i.second]++;
        }
       
       for(int i=0;i<nums.size();i++){
             if(mp2[mp[nums[i]]]==1){
                return nums[i];
             }
       }
       
        return -1;
    }
};