//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // Your code goes here
        // int n=matrix.size();
        // int m=matrix[0].size();
        int top=0, bottom=n-1, left=0, right = m-1;
       
        vector<int> v;
        while(top<=bottom && left<=right){
                for(int i=left; i<=right;i++){
                    v.push_back(a[top][i]);
            }
            top+=1;
        
                for(int i=top;i<=bottom;i++){
                    v.push_back(a[i][right]);
                }
                right-=1;
            
          if(top<=bottom){
                for(int i= right;i>=left;i--){
                    v.push_back(a[bottom][i]);
            }
            bottom-=1;
          }
            
            if(left<=right){
                for(int i= bottom;i>=top;i--){
                    v.push_back(a[i][left]);
                
            }
            left+=1;
            }
        }
        return v[k-1];
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends