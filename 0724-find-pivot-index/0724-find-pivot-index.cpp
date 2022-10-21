class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum,l_sum,r_sum;
        sum=0;
        l_sum=0;
        for(int i=0;i<nums.size();i++)
            sum=sum+nums[i];
        for(int i=0;i<nums.size();i++){
            r_sum=sum-l_sum-nums[i];
            if(r_sum==l_sum)
                return i;
            l_sum = l_sum+nums[i];
        }return -1;
        
    }
};