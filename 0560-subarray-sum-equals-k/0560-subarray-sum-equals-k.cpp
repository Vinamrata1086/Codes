class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int presum=0;
        int start=0;
        unordered_map<int, int> m;
        m[0]=1;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            int r = presum-k;
            start+=m[r];
            m[presum]+=1;
            
        }
        return start;
    } 
};