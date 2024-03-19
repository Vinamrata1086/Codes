//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    // void fun(stack<int> st,int x, int count){
        
        
    //     if(count==st.size()-1)
    //   { 
    //       st.push(x);
    //     return;
    //   }
       
       
    //   fun(st,x,count+1);
       
       
    // }
    
    stack<int> insertAtBottom(stack<int> st,int x){
        // int count=0;
        // return fun(st,x,count);
        if(st.empty())
        {st.push(x);
            return st;
        }
        int ans=st.top();
       st.pop();
       st=insertAtBottom(st,x);
       st.push(ans);
       return st;
       
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        cin>>x;
        stack<int> st;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            st.push(a);
        }
        Solution ob;
        stack<int> tmp=ob.insertAtBottom(st,x);
        vector<int> v;
        while(tmp.size()){
            v.push_back(tmp.top());tmp.pop();
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i];
            if(i!=v.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends