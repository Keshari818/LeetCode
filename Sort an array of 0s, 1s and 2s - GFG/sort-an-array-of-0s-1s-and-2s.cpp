//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int j=0;
        int p=0,q=0,r=0;
        for(int i=0;i<n;i++){
            if(a[i]==0)
                p++;
            else if(a[i]==1)
                q++;
            else if(a[i]==2)
                r++;
        }
        for(int i=0;i<p;i++){
            a[j]=0;
            j++;
        }
        for(int i=p;i<p+q;i++){
            a[j]=1;
            j++;
        }
        for(int i=p+q;i<p+q+r;i++){
            a[j]=2;
            j++;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends