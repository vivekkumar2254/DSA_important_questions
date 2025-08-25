class Solution {
  public:
    int minSwaps(vector<int>& arr) {
        
           vector<pair<int,int>>v;
           for(int i=0;i<arr.size();i++){
                   v.push_back({arr[i],i});
           }
           sort(v.begin(),v.end());
            int ans=0;
            int i=0;
            while(i<arr.size()){
                 int index = v[i].second;
                 int value = v[i].first;
                 if(index!=i){
                     swap(v[i],v[index]);
                     ans++;
                     
                 }else{
                     i++;
                 }
            }
            
       return ans;
        

    }
};
