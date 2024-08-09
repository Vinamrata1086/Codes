class Solution {
public:
    int trap(vector<int>& height) {
        
// using two pointer  ------------------       
        
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
        
        
        
        
        int i=0, j=height.size()-1;
        int l_max = height[0], sum=0, r_max=height[j];

        while (i<j)
        {
            if(l_max<= r_max){
                sum+=(l_max-height[i]);
                i++;
                l_max=max(l_max, height[i]);
            }
            
            else{
                sum+=(r_max-height[j]);
                j--;
                r_max=max(r_max, height[j]);
            }
          
          
        }
        return sum;
        
  
//  Extra space-----------------------        
        
//         int n=height.size();
//         vector<int> L(n,0);
//         vector<int> R(n,0);
//         int ans=0;
//         int maxm=INT_MIN;
        
//         for(int i=0;i<n;i++){
//             maxm=max(maxm, height[i]);
//             L[i]=maxm;
//         }
        
//         maxm=0;
        
//         for(int i=n-1;i>0;i--){
//             maxm= max(maxm, height[i]);
//             R[i]=maxm;
//         }
        
//         for(int i=0;i<n;i++){
//             ans+= min(L[i], R[i])-height[i];
//         }
        
//         return ans;
    }
};