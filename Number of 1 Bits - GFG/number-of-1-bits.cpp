//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        // int count=0;
        // string s="";
        // while(N>0){
        //     if(N==1){
        //         s.push_back('1');
        //         break;
        //     }
        //     else if(N%2==0){
        //         N=N/2;
        //         s.push_back('0');
        //     }
        //     else if(N%2==1){
        //         N=N/2;
        //         s.push_back('1');
        //     }
        // }
        // for(int i=0;i<s.length();i++)
        // {
        //     if(s[i]=='1')
        //         count++;
        // }
        // return count;
        
        int count =0;
        while(N>0){
            if((N & 1)==1){
                count++;
            }
            N=N>>1;
        }
        return count;
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends