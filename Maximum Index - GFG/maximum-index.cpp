//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        vector<int> v_l(n), v_r(n);
        v_l[0]=arr[0];
        for(int i=1;i<n;i++){
            v_l[i]=min(v_l[i-1],arr[i]);
        }
        v_r[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            v_r[i]=max(v_r[i+1],arr[i]);
        }
        int j=0, c=0, i=0;
        while(i<n && j<n){
            if(v_l[i]<=v_r[j])
            {
                c=max(c,j-i);
                j++;
            }
            else 
            i++;
        }
        return c;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends