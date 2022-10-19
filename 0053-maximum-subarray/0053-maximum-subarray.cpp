class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int m_sum=INT_MIN, c_sum=0;
        for(int i=0;i<nums.size();i++){
            c_sum=max(c_sum+nums[i], nums[i]);
            // if(c_sum>m_sum)
            //     m_sum=c_sum;
            m_sum=max(m_sum, c_sum);
            if(c_sum<0)
                c_sum=0;
            // if(nums.size()==1)
            //     m_sum = nums[i];
        }
        return m_sum;
    }
};