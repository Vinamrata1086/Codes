//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    private :
    int solve(int i,int j,string &A,vector<vector<int>>&dp)
    {
        if(i>=A.size()||j<0)
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        if(A[i]==A[j])
        return dp[i][j]=1+solve(i+1,j-1,A,dp);
        return dp[i][j]=max(solve(i+1,j,A,dp),solve(i,j-1,A,dp));
    }
  public:
    int longestPalinSubseq(string A) {
        //code here
        int n= A.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(0,n-1,A,dp);
    
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends