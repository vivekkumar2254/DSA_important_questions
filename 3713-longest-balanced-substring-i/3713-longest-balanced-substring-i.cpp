class Solution {
public:
   bool isbalance(unordered_map<char,int>&mp){
                for(auto it = mp.begin();it!=mp.end();it++){
                       auto i = next(it);
                        if(i!=mp.end()){
                        if(it->second!=i->second){
                            return 0;
                        }
                        }
                }
                return 1;
   }
    int longestBalanced(string s) {

          unordered_map<char,int>mp;
          int ans=0;
          for(int i=0;i<s.size();i++){
                
                  mp.clear();

                  for(int j=i;j<s.size();j++){
                          mp[s[j]]++;
                          if(isbalance(mp)){
                            ans=max(ans,j-i+1);
                          }
                  }
                   

          }
        return ans;
    }
};