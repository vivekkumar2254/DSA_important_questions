class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
         stack<long long>st;
         for(int i=0;i<nums.size();i++){
                long long value = nums[i];
                  while(!st.empty() && value == st.top()){
                       value = st.top()+value;
                    st.pop();
                  }
                  st.push(value);
         }
         vector<long long>ans(st.size());
          for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }
         return ans;
    }
};