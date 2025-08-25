class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {

             map<int,vector<int>>mp;

             for(int i=0;i<mat.size();i++){
                   for(int j=0;j<mat[0].size();j++){
                         mp[i+j].push_back(mat[i][j]);
                   }
             }
              vector<int>ans;
                int even=1;
              for(auto v:mp){
                     if(even%2!=0){
                           reverse(v.second.begin(),v.second.end());
                     }
                     for(auto j:v.second){
                    ans.push_back(j);
                }
                     even++;
              }
        return ans;
    }
};