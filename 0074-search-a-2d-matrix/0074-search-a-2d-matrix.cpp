class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0;
        if(!matrix.size()) return false;
        int m=matrix.size();
        int n=matrix[0].size();
        int h=(m*n)-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(matrix[mid/n][mid%n]==target)
                return true;
            if(matrix[mid/n][mid%n]>target)
                h=mid-1;
            else//(matrix[mid/m][mid%m]<target)
                l=mid+1;
        }
        return false;
    }
};