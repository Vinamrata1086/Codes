class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
//         for(int i=0;i<=k;i++){
//             nums.push_back(nums[i]);
        
//         }
//         nums.erase(nums.begin(),nums.begin()+k+1);
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    
    }
};