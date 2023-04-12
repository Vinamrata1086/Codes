class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        vector<pair<int, int>> v;
        for(auto it:m){
            v.push_back({it.second, it.first});
        }
        sort(v.rbegin(), v.rend());
        vector<int> a;
        for(int i=0;i<k;i++)
            a.push_back(v[i].second);
        return a;
    }
};