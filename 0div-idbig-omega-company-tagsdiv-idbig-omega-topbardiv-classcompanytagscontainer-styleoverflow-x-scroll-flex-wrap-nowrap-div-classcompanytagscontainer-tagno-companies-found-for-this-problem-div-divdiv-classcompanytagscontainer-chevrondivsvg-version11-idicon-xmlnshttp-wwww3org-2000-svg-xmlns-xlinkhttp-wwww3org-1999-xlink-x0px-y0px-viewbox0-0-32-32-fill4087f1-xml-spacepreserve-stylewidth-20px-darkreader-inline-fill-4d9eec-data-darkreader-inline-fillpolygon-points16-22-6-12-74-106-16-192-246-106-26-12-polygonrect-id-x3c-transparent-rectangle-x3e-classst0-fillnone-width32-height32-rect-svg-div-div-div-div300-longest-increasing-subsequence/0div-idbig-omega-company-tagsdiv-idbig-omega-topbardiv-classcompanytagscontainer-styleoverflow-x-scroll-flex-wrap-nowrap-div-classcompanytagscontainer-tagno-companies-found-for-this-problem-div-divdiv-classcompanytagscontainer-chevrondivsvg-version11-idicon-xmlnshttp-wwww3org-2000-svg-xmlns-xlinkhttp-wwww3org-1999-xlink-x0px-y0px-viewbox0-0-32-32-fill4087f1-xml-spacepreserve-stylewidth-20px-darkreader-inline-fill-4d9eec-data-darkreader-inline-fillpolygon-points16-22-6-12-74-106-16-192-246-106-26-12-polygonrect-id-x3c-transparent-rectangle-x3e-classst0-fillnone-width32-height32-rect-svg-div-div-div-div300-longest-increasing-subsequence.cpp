class Solution {
    private:
    // int solve(vector<int>& nums, vector<vector<int>> &dp){
    //     if()
    // }
    
    /*Brute force: include and exclude: first include and for next element check whether the element is greater than the last element
    */
    
    int solve(vector<int>& nums, int index,int prevIndex, vector<vector<int>> &dp){
        if(nums.size()==index)
            return 0;
        
        if(dp[index][prevIndex+1]!=-1)
            return dp[index][prevIndex+1];
        
        //exclude
        int notTake= 0+ solve(nums, index+1, prevIndex, dp);
        
        int len;
        int ele=nums[index];
        int take=INT_MIN;
        if(prevIndex==-1 || ele> nums[prevIndex])
            // op.push_back(ele);
            // len=max(op.size(), INT_MIN);
            take=1+solve(nums, index+1, index, dp);
        
        return dp[index][prevIndex+1]=max(take, notTake);
        // return max(take, notTake);
    }
    
public:
    int lengthOfLIS(vector<int>& nums) {
         vector<vector<int>> dp(nums.size()+1, vector<int>(nums.size(), -1));
        return solve(nums, 0, -1, dp);
    }
};



