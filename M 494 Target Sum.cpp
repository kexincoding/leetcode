class Solution {
public:
    int result;
    int findTargetSumWays(vector<int>& nums, int S) {
        dfs(0, 0, nums, S);
        return result;
    }
    void dfs(int sum, int cnt, vector<int>& nums, int S) {
        if(cnt == nums.size()) {
            if(sum == S)
                result++;
            return ;
        }
        dfs(sum + nums[cnt], cnt + 1, nums, S);
        dfs(sum - nums[cnt], cnt + 1, nums, S);
    }
};
