class Solution {
public:
    int trap(vector<int>& height) {
//         int peak=0;
//         int sum=0;
//         int r=height.size()-1;
//         int left =0, right=0;
        
//         for(int i=0;i<r;i++){
//             if(height[peak]<height[i]){
//                 peak=i;
//             }
//             sum+=height[i];   
//         }
//         int mx=INT_MIN;
    
//     for(int i=0;i<=peak;i++) {
//             left += max(mx, height[i]);
//             mx = max(mx, height[i]);
//         }
//                  mx=INT_MIN;

//     for (int i=r-1; i>peak;--i) {
//             right += max(mx, height[i]);
//             mx = max(mx, height[i]);
//         }
//     return left+right-sum;
        
         int n = height.size();
        vector<int> L(n,0);
        vector<int> R(n,0);
        int ans=0;
        int maximum=INT_MIN;
        int minimum=INT_MAX;
        for(int i=0;i<n;++i){
            maximum = max(maximum,height[i]);
            L[i] = maximum;
        }
        maximum=0;
        for(int i=n-1;i>=0;--i){
            maximum = max(maximum,height[i]);
            R[i] = maximum;
        }
        for(int i=0;i<n;++i)
            ans += min(L[i],R[i]) - height[i];
        return ans;
    }
};