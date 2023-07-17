//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		  //  queue<char> q;
    //         vector<int> v(26, 0);
    //         string ans = "";
            
    //         for(auto i : A){
    //             ++f[i - 'a'];
                
    //             if(f[i - 'a'] == 1)
    //                 q.push(i);
                    
    //             while(q.size() and f[q.front() - 'a'] > 1)
    //                 q.pop();
                    
    //             if(q.size())
    //                 ans += q.front();
    //             else
    //                 ans += '#';
    //         }
            
    //         return ans;
            
            
            queue<char> q;
            map<char, int> m;
            string s;
            
            for(int i=0;i<A.size();i++){
                char c=A[i];
                m[c]++;
                if(m[c]==1)
                    q.push(c);
                while(!q.empty() && m[q.front()]!=1)
                    q.pop();
                if(q.empty())
                    s.push_back('#');
                else
                    s.push_back(q.front());
            }
            return s;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends