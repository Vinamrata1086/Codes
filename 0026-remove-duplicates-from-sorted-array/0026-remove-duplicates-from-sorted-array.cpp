class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // vector<int> v;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i] != nums[i-1]){
        //         v.push_back(nums[i]);
        //     }
        // }
        //     int k=v.size();
        //     int n = nums.size() - v.size();
        //     for(int i=0;i<=n-1;i++)
        //     v.push_back('_');
        //     return k;
        
          int numsSize=nums.size();
    int j=0;
        for(int i=0;i<numsSize-1;i++){
            if(nums[i]!=nums[i+1])
                nums[j++]=nums[i];
        }
        nums[j++]=nums[numsSize-1];
        return j;

        
        
    }
};