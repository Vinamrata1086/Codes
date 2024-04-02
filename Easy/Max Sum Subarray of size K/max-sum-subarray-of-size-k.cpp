//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i=0;
        int j=0;
        long  s=0;
        long maxm=INT_MIN;
        
        vector<int>sum;
        while(j<N){
            s=s+Arr[j];

        if((j-i+1)<K)
        j++;
        else if((j-i+1)==K){
            maxm=max(maxm,s);
            s=s-Arr[i];
            i++;
            j++;
        }
        }
        return maxm;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends