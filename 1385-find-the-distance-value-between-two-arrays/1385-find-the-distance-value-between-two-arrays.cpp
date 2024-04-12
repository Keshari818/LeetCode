class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int res = 0;
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        for(auto x:arr1)
        {
            int start = 0;
            int end = arr2.size()-1;
            int mid = (start + end)/2;
            res++;
            while(start <= end)
            {
                mid = (start + end)/2;
                if((arr2[mid] <= (d+x)) && (arr2[mid] >= (x-d)))
                {
                    res--;
                    break;
                }
                else if(arr2[mid] > (d+x))                    
                    end = mid-1;
                else                                          
                    start = mid+1;
            }
        }
        return res;
    }
};