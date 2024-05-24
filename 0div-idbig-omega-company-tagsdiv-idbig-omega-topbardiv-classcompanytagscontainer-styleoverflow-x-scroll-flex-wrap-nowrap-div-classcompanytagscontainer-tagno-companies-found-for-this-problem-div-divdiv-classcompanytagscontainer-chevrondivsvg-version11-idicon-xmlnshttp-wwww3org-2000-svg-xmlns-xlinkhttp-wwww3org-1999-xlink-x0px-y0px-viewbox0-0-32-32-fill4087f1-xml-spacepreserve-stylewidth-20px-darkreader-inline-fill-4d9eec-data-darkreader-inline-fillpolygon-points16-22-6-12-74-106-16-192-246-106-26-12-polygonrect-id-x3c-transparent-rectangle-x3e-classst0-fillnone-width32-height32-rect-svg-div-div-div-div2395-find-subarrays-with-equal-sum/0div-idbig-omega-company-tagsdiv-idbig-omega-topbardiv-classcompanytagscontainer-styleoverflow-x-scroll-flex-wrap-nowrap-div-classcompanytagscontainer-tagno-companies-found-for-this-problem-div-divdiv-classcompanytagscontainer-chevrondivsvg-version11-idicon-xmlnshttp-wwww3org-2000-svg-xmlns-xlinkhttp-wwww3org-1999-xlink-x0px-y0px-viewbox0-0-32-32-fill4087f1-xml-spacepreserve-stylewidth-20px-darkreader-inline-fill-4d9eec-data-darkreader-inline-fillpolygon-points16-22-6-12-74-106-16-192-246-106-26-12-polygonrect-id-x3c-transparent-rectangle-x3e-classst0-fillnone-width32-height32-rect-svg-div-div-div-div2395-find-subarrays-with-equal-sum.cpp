class Solution {
public:
    
    bool findSubarrays(vector<int>& nums) {
//         int count=0;
        
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[j]+nums[j+1]==nums[i]+nums[i+1])
//                     count++;
//             }
            
//         }
//         return(count>=1);
        
        int sum=0;
        unordered_map<int, int> m;
        for(int i=1;i<nums.size();i++){
            sum=nums[i]+nums[i-1];
            m[sum]++;
            
            if(m[sum]>1)
                return true;
        }
        return false;
        
    }
};