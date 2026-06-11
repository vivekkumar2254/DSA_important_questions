class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {

        vector<vector<int>>grid;
        vector<vector<int>>ans;
        for(int i=0;i<rows;i++){
        
            for(int j=0;j<cols;j++){
               grid.push_back({abs(rCenter-i)+abs(cCenter-j),i,j});
            }
            
        }

        sort(grid.begin(),grid.end());

          for(vector<int>&v:grid){
                int a = v[1];
                int b =  v[2];
                ans.push_back({a,b});
          }
        return ans;
    }
};