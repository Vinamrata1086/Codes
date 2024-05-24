class Solution {
public:
    bool solve(vector<int>& nums, int index, int target,  vector<vector<int>> &dp){
        int n=nums.size();
        if(index>=n)
            return 0;
        if(target==0)
            return 1;
        if(target<0)
            return 0;
        
        if(dp[index][target]!=-1)
            return dp[index][target];
        
        bool include=solve(nums, index+1, target-nums[index], dp);
        bool exclude=solve(nums, index+1, target-0, dp);
        
        return dp[index][target]=(include or exclude);
        
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        
        if(sum%2!=0)
            return 0;
        
        int target=sum/2;
        
        vector<vector<int>> dp(nums.size(), vector<int>(target+1, -1));
        return solve(nums, 0, target, dp);
        
    }
};