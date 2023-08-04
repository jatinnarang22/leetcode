class Solution {
public:
    bool fun(vector<int>& nums, int n, int i, vector<int>& dp) {
        if (i == n - 1) {
            return true;
        }
        if (dp[i] != -1) {
            return dp[i];
        }
        if (nums[i] == 0 || i >= n) {
            return false;
        }
        for (int j = 1; i + j < n && j <= nums[i]; j++) {
            if (fun(nums, n, i + j, dp)) {
                return dp[i] = true;
            }
        }
        return dp[i] = false;
    }
    
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return fun(nums, n, 0, dp);
    }
};
