class Solution {
public:
vector<string>ans;
     void dfs(int i,int n,int k,int cost,bool f,string s){
                if(cost>k)return;
                if(i==n){
                    ans.push_back(s);
                    return;
                }
                s.push_back('0');
                dfs(i+1,n,k,cost,false,s);
                s.pop_back();
                if(!f){
                    s.push_back('1');
                    dfs(i+1,n,k,cost+i,true,s);
                    s.pop_back();
                }
     }

    vector<string> generateValidStrings(int n, int k) {
        string s;
        dfs(0,n,k,0,false,s);
        return ans;
    }
};