//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        
        vector<pair<int, int>> v;
        for(auto it:m){
            v.push_back({it.second, it.first});
            // if(m[i]<k)
            // m.erase(i);
            // else
            // nums[i-1]=m[i];
        }
        sort(v.rbegin(), v.rend());
        vector<int> a;
        for(int i=0;i<k;i++)
        a.push_back(v[i].second);
        return a;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends