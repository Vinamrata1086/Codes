//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

bool solve(int index, int target, int arr[],int N, vector<vector<int>> &dp){
    
    if(index>=N)
    return 0;
    
    if(target<0)
    return 0;
    
    if(target==0)
    return 1;
    
    if(dp[index][target]!=-1)
    return dp[index][target];
    
    bool include= solve(index+1, target-arr[index], arr,N,  dp);
    bool exclude= solve(index+1, target-0, arr,N, dp);
    
    return dp[index][target]=(include or exclude);
}
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        int target;
        
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum %2!=0)
        return 0;
        
        target = sum/2;
        vector<vector<int>> dp(N, vector<int> (target+1, -1));
        return solve(0, target, arr,N, dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends