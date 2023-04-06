//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        int long long y;
         int i=0;y=0;
        while(x>0){
          y+=(x%2)*pow(2,31-i);
          i++;x=x/2;
        }return y; 
    }
    // void dict_to_binary(int n){
    //     int a[32];
    //     int i =0;
    //     while(n>0){
    //         a[i]=n%2;
    //         n=n/2;
    //         i++;
    //     }
    //     for(i=i-1;i>0;i--)
    //     return a[j];
    // }
    void binary_to_dict(int n){
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends