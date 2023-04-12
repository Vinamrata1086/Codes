# Find all factorial numbers less than or equal to N
## Basic

<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">A number N&nbsp; is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120,
Given a number N&nbsp;, the task is to return the list/vector of the factorial numbers smaller than or equal to N&nbsp;.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
<strong>Output: </strong>1 2</span>
Explanation: </strong>The first factorial number is 
1 which is less than equal to N. The second 
number is 2 which is less than equal to N,
but the third factorial number is 6 which 
is greater than N. So we print only 1 and 2.</span></pre>


<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
N = 6
<strong>Output: </strong> 1 2 6</span>
Explanation: </strong>The first three factorial 
numbers are less than equal to N but 
the fourth factorial number 24 is 
greater than N. So we print only first 
three factorial numbers.</span></pre>


<p><span style="font-size:18px"><strong>Your Task:</strong><br>
</span></p>
</div>
You don't need to read input or print anything. Your task is to complete the function  <strong>factorialNumbers()</strong> which takes an integer N&nbsp; as an input parameter and return the list/vector of the factorial numbers smaller than or equal to N&nbsp;.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(K), Where K is the number of factorial numbers.<br>
<strong>Expected Auxiliary Space</strong> : O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints: </strong></span><br>
<span style="font-size:18px">1&lt;=N &lt;=1018<br>


<div><p>
<span style="font-size:18px"><strong>Code:</strong></span><br>
</p></div>


```cpp

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
// long long fac(int n){
//     if(n==1 && n==0)
//             return 1;
//         else
//             return n*fac(n-1);
// }
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long> a;
        long long s=1, i=1;
        while(1){
            s=s*i++;
            if(s<=N)
                a.push_back(s);
            else
            break;
        }return a;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends
```
