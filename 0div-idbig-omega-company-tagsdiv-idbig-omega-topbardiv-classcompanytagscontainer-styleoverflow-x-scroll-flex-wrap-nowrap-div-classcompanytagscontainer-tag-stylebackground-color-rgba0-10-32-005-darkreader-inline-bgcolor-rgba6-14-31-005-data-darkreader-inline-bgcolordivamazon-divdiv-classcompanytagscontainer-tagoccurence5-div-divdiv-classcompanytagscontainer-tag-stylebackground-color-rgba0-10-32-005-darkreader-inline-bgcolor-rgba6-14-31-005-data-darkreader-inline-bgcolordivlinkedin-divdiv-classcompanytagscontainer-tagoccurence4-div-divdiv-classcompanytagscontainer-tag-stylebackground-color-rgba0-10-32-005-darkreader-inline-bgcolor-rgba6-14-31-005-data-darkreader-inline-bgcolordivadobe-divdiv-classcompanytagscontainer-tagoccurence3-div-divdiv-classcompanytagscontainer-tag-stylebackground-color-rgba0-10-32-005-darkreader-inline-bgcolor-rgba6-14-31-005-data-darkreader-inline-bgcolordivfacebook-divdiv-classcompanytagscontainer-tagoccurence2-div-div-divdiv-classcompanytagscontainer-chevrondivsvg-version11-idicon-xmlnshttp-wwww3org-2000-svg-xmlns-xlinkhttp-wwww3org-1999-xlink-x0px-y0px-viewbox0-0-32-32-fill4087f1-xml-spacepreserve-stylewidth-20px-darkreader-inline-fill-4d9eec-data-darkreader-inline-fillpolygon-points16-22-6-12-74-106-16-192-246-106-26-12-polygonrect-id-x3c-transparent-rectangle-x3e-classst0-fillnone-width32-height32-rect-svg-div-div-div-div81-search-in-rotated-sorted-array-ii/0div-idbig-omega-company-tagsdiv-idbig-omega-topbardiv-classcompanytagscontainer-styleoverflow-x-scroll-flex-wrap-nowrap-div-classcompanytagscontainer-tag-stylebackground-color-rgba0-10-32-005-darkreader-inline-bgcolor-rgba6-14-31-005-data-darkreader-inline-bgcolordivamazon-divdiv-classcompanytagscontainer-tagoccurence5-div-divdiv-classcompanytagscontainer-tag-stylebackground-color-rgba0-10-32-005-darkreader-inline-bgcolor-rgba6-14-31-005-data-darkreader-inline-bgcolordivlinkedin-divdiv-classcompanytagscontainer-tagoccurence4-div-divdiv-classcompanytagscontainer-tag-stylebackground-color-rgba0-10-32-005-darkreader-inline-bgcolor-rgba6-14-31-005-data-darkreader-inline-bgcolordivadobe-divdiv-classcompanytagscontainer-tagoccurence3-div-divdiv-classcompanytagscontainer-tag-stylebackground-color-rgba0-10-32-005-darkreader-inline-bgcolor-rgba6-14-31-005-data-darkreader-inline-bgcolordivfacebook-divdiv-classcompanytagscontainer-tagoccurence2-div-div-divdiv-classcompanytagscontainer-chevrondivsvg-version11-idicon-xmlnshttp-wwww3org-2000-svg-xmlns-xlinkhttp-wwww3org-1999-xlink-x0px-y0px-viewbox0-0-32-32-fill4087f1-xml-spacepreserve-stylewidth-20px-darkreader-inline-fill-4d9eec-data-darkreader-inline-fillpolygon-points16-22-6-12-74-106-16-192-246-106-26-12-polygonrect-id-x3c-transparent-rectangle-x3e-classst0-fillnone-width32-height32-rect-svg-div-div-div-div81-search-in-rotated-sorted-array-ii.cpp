class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        
        while(l<=r){
            int m=(l+r)/2;
            
            if(target==nums[m])
                return true;
            
          
             if(nums[m]>nums[r]){
                if(target>=nums[l] && target<nums[m])
                    r=m;
                else
                    l=m+1;
            }
            
            else if(nums[m]<nums[r]){
                if(target<=nums[r] && target>nums[m])
                    l=m+1;
                else
                    r=m;
            }
            else{
                r--;
            }
            
            // else{
            //     if(target>nums[m])
            //         l=m+1;
            //     else
            //         r=m-1;
            // }
        }
        
        return false;
    }
};