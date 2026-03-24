class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        vector<int>arr;
        int col = grid[0].size();
        int row = grid.size();
        vector<vector<int>>ans;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                   arr.push_back(grid[i][j]);
            }
        }
         int n=arr.size();
        vector<long long>a1(n),a2(n);

        a1[0]=1;
        a2[n-1]=1;
        for(int i=1;i<n;i++){
            a1[i]=(a1[i-1]*arr[i-1])%12345;
        }
        for(int i=n-2;i>=0;i--){
              a2[i]=(a2[i+1]*arr[i+1])%12345;
        }
        //    vector<int>arr(n);
        for(int i=0;i<n;i++){
               arr[i]=(a1[i]*a2[i])%12345;
        }

       for (int i = 0; i < arr.size(); i += col) {
        vector<int> a;

        for (int j = i; j < i + col && j < arr.size(); j++) {
            a.push_back(arr[j]);
        }

        ans.push_back(a);
    }

return ans;


    }
};