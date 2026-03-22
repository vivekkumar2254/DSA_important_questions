class Solution {
public:
    void rotate(vector<vector<int>>& mat){
           for(int i=0;i<mat.size();i++){
              for(int j=i;j<mat[0].size();j++){
                     swap(mat[i][j],mat[j][i]);
              }
           }
           for(int i=0;i<mat.size();i++){
             int start=0;
             int end=mat[0].size()-1;
             while(start<end){
                swap(mat[i][start],mat[i][end]);
                start++;
                end--;
             }
           }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int cnt=4;
        while(cnt){
              if(mat==target) {
                return 1;
              }
              rotate(mat);
              cnt--;
        }
        return 0;
    }
};