class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int m_prod=nums[0];
        // int c_prod=nums[0];
        // int min_prod=nums[0];
        int m_prod=INT_MIN;
        int c_prod=1;
        int min_prod=1;
        for(int i=0;i<nums.size();i++){
           // c_prod=max(nums[i],c_prod*nums[i]);
           //  m_prod=max(m_prod,c_prod);
            if(nums[i]<0)
                swap(c_prod,min_prod);
            c_prod=max(c_prod*nums[i],nums[i]);
            min_prod = min(min_prod*nums[i],nums[i]);
            m_prod=max(m_prod,c_prod);
            // if(c_prod<0)
            //     c_prod=0;
        }return m_prod;
        
    }
};