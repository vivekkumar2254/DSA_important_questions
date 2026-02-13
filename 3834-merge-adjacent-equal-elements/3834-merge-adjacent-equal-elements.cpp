class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long> st;
        for (auto& i : nums) {
            long long curr = i;
            while (!st.empty() && st.top() == curr) {
                long long t = st.top();
                st.pop();
                curr = t * 1ll * 2;
            }
            st.push(curr);
        }
        vector<long long> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};