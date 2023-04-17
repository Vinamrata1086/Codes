class Solution {
public:
    bool check(vector<int>& nums) {
        int a=0;
        for(int i=1;i<nums.size();i++)
            if(nums[i]<nums[i-1])
                a++;
        if(nums[nums.size()-1]>nums[0])
            a++;
        return a<=1;
    }
    
};