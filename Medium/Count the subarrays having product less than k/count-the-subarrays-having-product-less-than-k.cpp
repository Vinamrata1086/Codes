//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        // int c=0;
        // long long p=1;
        // int j=0,i=0;
        // while(i<n){
        //   p*=a[i];
        //   while(j<=i && p>=k)
        //   { p/=a[j];
        //   j++;
              
        //   }
        //   c=c+(i-j+1);
        //   i++;
        // }
        // return c;
        
         long long p=1;
        long long i=0,j=0,ans=0;
        for(j=0;j<n;j++){
            p=p*a[j];
            while(p>=k && i<j){
                p/=a[i];
                i++;
            }
            if(p<k){
                ans+=j-i+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends