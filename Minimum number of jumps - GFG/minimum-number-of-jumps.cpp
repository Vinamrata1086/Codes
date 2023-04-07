//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int i=1;
        int step, max_s, j=1;
        max_s=arr[0];
        step=arr[0];
        if(n<=1)
            return 0;
        if(arr[0]==0)
            return -1;
        while(i<n){
           if(i==n-1)
                return j;
            max_s=max(max_s,i+arr[i]);
            step--;
            if(step==0){
                j++;
                    if(max_s<=i)
                        return -1;
                step=max_s-i;
            }
            i++;
        }return -1;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends