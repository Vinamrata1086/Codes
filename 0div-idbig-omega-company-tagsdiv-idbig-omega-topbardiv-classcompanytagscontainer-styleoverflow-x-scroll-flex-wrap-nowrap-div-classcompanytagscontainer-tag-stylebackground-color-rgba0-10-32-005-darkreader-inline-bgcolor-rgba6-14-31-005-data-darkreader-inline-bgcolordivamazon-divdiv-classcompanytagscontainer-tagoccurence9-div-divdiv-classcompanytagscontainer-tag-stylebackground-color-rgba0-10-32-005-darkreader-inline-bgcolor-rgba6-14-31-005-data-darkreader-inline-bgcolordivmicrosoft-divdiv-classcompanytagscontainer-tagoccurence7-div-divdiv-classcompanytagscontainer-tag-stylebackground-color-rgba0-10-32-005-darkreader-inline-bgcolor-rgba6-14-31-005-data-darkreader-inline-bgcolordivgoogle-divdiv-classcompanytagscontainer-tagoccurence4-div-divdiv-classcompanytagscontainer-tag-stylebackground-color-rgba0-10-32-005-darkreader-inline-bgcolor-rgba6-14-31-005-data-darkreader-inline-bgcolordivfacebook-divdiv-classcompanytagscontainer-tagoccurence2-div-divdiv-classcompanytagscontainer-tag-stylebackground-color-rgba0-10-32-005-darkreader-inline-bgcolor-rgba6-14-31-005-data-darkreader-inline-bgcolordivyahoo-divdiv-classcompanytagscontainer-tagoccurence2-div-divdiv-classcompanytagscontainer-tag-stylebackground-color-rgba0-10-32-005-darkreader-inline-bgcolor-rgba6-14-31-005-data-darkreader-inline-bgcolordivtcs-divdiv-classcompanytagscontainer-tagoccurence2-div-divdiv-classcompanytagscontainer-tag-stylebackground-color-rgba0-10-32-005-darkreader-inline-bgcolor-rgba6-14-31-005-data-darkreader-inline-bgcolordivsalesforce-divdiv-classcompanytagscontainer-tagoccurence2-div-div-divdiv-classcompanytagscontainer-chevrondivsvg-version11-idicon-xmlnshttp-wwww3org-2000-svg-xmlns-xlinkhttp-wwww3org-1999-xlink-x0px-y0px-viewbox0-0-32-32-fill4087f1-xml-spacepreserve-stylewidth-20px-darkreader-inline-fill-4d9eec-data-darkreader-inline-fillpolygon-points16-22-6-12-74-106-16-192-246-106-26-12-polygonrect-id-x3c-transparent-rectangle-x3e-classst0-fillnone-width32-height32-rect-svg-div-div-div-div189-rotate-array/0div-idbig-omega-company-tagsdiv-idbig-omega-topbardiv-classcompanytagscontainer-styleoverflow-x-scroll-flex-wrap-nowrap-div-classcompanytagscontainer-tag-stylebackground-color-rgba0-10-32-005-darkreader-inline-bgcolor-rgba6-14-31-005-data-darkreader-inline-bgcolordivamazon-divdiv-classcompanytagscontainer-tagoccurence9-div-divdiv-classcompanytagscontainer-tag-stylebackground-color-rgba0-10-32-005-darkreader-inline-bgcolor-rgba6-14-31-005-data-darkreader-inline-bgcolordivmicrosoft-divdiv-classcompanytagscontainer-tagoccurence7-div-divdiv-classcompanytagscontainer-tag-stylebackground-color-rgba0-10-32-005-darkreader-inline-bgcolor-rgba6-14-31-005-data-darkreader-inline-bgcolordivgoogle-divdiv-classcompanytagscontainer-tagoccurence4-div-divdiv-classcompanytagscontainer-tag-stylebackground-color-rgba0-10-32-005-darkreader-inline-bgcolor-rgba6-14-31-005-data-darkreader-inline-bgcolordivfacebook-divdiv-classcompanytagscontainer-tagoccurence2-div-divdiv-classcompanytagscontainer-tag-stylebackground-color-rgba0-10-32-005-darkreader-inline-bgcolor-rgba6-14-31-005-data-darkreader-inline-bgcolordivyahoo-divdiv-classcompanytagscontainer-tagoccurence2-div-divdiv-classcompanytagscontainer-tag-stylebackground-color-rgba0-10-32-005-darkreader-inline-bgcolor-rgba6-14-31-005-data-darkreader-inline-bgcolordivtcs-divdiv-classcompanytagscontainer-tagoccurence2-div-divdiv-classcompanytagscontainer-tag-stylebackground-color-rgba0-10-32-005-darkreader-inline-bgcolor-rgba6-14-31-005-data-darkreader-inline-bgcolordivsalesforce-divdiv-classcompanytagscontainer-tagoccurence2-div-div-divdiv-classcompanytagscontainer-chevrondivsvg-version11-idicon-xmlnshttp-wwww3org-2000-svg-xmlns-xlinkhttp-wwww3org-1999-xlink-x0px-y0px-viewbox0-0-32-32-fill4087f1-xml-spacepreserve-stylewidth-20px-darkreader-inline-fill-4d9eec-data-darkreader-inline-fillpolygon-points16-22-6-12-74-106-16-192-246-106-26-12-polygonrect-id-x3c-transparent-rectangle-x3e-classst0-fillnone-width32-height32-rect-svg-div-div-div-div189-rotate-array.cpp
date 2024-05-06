class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        /* total number of rotation will be always k%n: eg:    */
        k=k%n;
//         for(int i=0;i<=k;i++){
//             nums.push_back(nums[i]);
        
//         }
//         nums.erase(nums.begin(),nums.begin()+k+1);
        
        
        
//         reverse(nums.begin(), nums.end());
//         reverse(nums.begin(), nums.begin()+k);
//         reverse(nums.begin()+k, nums.end());
        
        vector<int> temp;
        int m=n-k;
        for(int i=m;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int i=0;i<m;i++){
            temp.push_back(nums[i]);
        }
        nums=temp;    
        
    }
     
};