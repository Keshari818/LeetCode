//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // // code here
            // // int count =0;
            // // int x=arr1[n-1];
            // // for(int j=0;j<n;j++){
            // //     if(arr2[j]<x)
            // //     if(count==n)
            // //         break;
            // // }
            // int temp;
            // int i=0;
            // int j=0;
            // while(i<n && j<m){
            //     if(arr1[i]>arr2[j]){
            //         temp=arr1[n-1];
            //         for(int a=n-2;a>=i;a--){
            //             arr1[a+1]=arr1[a];
            //         }
            //         arr1[i]=arr2[j];
            //         arr2[j]=temp;
            //         i++;
            //         j++;
            //     }
            //     else if(arr2[j]>arr1[i]){
            //         i++;
            //     }
                
            // }
            // sort(arr1,arr1+n);
            // sort(arr2,arr2+m);
            int i=n-1;
            int j=0;
            while(i>=0 && j<m){
                if(arr1[i]>arr2[j]){
                    int temp=arr1[i];
                    arr1[i]=arr2[j];
                    arr2[j]=temp;
                    i--;
                    j++;
                }
                else
                    break;
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
            
        } 
    
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends