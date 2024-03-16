class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
//         int n = matrix.size();
//         int left = matrix[0][0], right = matrix[n - 1][n - 1];
        
//         while (left < right) {
//             int mid = left + (right - left) / 2;
//             int count = 0;
//             for (int i = 0; i < n; ++i) {
//                 count+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
//             }
//             cout<<count<<endl;
//             if (count < k)
//                 left = mid + 1;
//             else
//                 right = mid;
//         }
//         return left;
        
        
        //Brute solution -------------------------------------------
        
        priority_queue<int>pq;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                pq.push(matrix[i][j]);
                if(pq.size()>k)
                    pq.pop();
            }
        }
        return pq.top();
        
    }
};