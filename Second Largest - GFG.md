# Second Largest
## Basic

<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array Arr of size N&nbsp;, print second largest distinct element from an array.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N&nbsp; = 6
Arr[] = {12, 35, 1, 10, 34, 1}
<strong>Output: </strong>34</span>
<strong>Explanation: </strong>The largest element of the array is 35 and the second largest element is 34.</span></pre>


<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
N = 3
Arr[] = {10, 5, 10}
<strong>Output: </strong> 3</span>
<strong>Explanation: </strong>The largest element of the array is 10 and the second largest element is 5.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
</span></p>
</div>
You don't need to read input or print anything. Your task is to complete the function <strong>print2largest()</strong> which takes the array of integers <strong>arr</strong> and <strong>n</strong> as parameters and returns an integer denoting the answer. If 2nd largest element doesn't exist then return -1.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(K)<br>
<strong>Expected Auxiliary Space</strong> : O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints: </strong></span><br>
<span style="font-size:18px">1&lt;=N &lt;=10<sup>5<br>
1&lt;=A[i]&lt;=10<sup>5</sup></span></p>

<div><p>
<span style="font-size:18px"><strong>Code:</strong></span><br>
</p></div>

```cpp
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	   // if(n<2)
	   // return -1;
	    int max=arr[0];
	    int sec_max = -1;
	    for(int i=1;i<n;i++){
	        if(max<arr[i]){
	        sec_max = max;
	        max=arr[i];}
	        else if(max>arr[i]){
	            if(sec_max!=max && sec_max <arr[i])
	            sec_max = arr[i];
	        }
	    }
	    return sec_max;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
```