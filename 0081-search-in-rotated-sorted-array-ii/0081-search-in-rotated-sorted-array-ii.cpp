class Solution {
public:
    bool search(vector<int>& arr, int target) {
        // int n=arr.size();
        // for(int i=0;i<n;i++){
        //     if(arr[i]==target){
        //         return true;
        //     }
        // }
        // return false;
        int n=arr.size();
        int low = 0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                cout<<arr[mid];
                return true;
            }
            if(arr[low]== arr[mid] && arr[high]== arr[mid] )low++,high--;
            else if(arr[mid]>=arr[low]){
                if(target>=arr[low] && target<=arr[mid])
                    high=mid-1;
                else
                    low=mid+1;
            }
            else{
                if(target>=arr[mid] && target<=arr[high])
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return false;
    }
    
};