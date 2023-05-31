class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        int i=m-1,j=n-1,a=n+m-1;
        while(j>=0){
            if(i<0 || arr1[i]<arr2[j]){
                arr1[a]=arr2[j];
                j--;
                a--;
            }
            else{
                arr1[a]=arr1[i];
                i--;
                a--;
            }
        }
    }
};