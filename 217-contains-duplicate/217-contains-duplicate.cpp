class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        bool flag;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]+=1;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]>=2)
                return true;
          
                
        }return false;
    }
};