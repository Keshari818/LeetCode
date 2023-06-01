//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
    // Your code goes here
    // int total;                            In this method there can be overflow
    // total=N*(N+1)/2;
    // for(int i=0;i<N-1;i++){
    //     total-=A[i];
    // }
    // return total;
    // _______________________________________
    int i;                                  //So this method is better than upper one
    int X1=A[0];
    int X2=1;
    
    for(int i=1;i<N-1;i++){
        X1=X1^A[i];
        X2=X2^(i+1);
    }
    X2=X2^N;
        
    // for(int i=2;i<=N;i++)
        // X2=X2^i;
        
    return (X1^X2);
}