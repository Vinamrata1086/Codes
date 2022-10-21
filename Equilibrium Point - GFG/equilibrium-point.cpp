//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int sum, l_sum, r_sum;
        int p[n];
        for(int i=0;i<n;i++){
            if(i==0)
            p[i]=a[i];
            else
            p[i]=p[i-1]+a[i];
        }
        sum=p[n-1];
        for(int i=0;i<n;i++){
            l_sum=p[i]-a[i];
            r_sum=sum-p[i];
            if(l_sum==r_sum)
            return i+1;
        }return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends