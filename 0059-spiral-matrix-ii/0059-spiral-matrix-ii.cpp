class Solution {
public:
    vector<vector<int>> generateMatrix(int k) {
         vector<vector<int>>ans(k,vector<int>(k));
           int m =k;
           int n =k;
           int top = 0;
           int down = m-1;
           int left=0;
           int right=n-1;
           int dir=0;
           int value=1;
           while(top<=down && left<=right){
                    if(dir==0){
                         for(int i=left;i<=right;i++){
                              ans[top][i]=value;
                              value++;
                         }
                         top++;
                    }
                    if(dir==1){
                        for(int i=top;i<=down;i++){
                             ans[i][right]=value;
                              value++;
                        }
                        right--;
                    }
                    if(dir==2){
                         for(int i=right;i>=left;i--){
                              ans[down][i]=value;
                              value++;
                         }
                         down--;
                    }
                    if(dir==3){
                          for(int i=down;i>=top;i--){
                             ans[i][left]=value;
                              value++;
                          }
                          left++;
                    }
                   dir++;
                    if(dir>3){
                        dir=0;
                    }
           }
           return ans;
        
    }
};