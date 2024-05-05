class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
//         int sum=0;
//         // sort(nums.begin(), nums.end());
//         for(int i=0; i<nums.size(); i++){
//             sum=(sum+nums[i])%p;
            
//         }
//         if(sum==0)
//             return 0;
        
//         int temp=0;
//         int n=nums.size();
//         unordered_map<int,int>m;
        
//         for(int i=0;i<n;i++){
//             temp=(temp+nums[i])%p;
//             m[temp]=i;
//             int rest=(temp-sum+p)%p;
//             if (m.find(rest) != m.end()) 
//                 n = min(n, i - m[rest]);
//         }
        
//         return n>= nums.size() ? -1 : n;
        
        
           int tmp = 0, res = nums.size(), need_to_remove = 0;
        for (auto num : nums) need_to_remove = (need_to_remove + num) % p;
        if (need_to_remove == 0) return 0;
        
        unordered_map<int, int> pre_sum;
        pre_sum[0] = -1;
        
        for (int i = 0; i < nums.size(); i++) {
            tmp = (tmp + nums[i]) % p;
            pre_sum[tmp] = i;
            int rest = (tmp - need_to_remove + p) % p;
            
            if (pre_sum.find(rest) != pre_sum.end()) res = min(res, i - pre_sum[rest]);
        }
        return res >= nums.size() ? -1 : res;
        
    }
};