//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
  //Your code here
  int sum , l_sum, r_sum;
  int p[n];
  for(int i=0;i<n;i++){
      if(i==0)
        p[i]=A[i];
    else
        p[i]=p[i-1]+A[i];
  }
  sum=p[n-1];
  for(int i=0;i<n;i++){
      l_sum=p[i]-A[i];
      r_sum=sum-p[i];
      if(l_sum==r_sum)
        return i;
  }return -1;
}