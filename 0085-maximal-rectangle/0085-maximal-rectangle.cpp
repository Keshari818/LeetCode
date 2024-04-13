class Solution {
public:
//     vector<int>nextsmaller(vector<int>&arr){
//         stack<int>s;
//         s.push(-1);
//         int n=arr.size();
//         vector<int> ans(n);
        
//         for(int i=n-1;i>=0;i--){
//             int item = arr[i];
//             while(s.top()!=-1 && arr[s.top()]>=item)
//                 s.pop();
//             if(s.top()==-1)
//                 arr[i] = n;
//             else 
//                 arr[i] = s.top();
//             s.push(i);
//         }
//         return ans;
//     }
    
//     vector<int>prevsmaller(vector<int>&arr){
//         stack<int>s;
//         s.push(-1);
//         int n=arr.size();
//         vector<int> ans(n);
        
//         for(int i=0;i<n;i++){
//             int item = arr[i];
//             while(s.top()!=-1 && arr[s.top()]>=item)
//                 s.pop();
            
//             arr[i] = s.top();
//             s.push(i);
//         }
//         return ans;
//     }
//     int largestArea(vector<int>&arr){
//         vector<int> prev = prevsmaller(arr);
//         vector<int> next = nextsmaller(arr);
        
//         int maxArea = INT_MIN;
        
//         for(int i=0;i<arr.size();i++){
//             int length = arr[i];
//             int breadth = next[i] - prev[i] - 1;
//             int newArea = length*breadth;;
//             maxArea = max(maxArea,newArea);
//         }
//         return maxArea;
//     }
//     int maximalRectangle(vector<vector<char>>& matrix) {
        
//         int maxi=INT_MIN;
//         vector<int>v(matrix[0].size(),0);
//         for(int i=0;i<matrix.size();i++){
//             for(int j=0;j<v.size();j++){
//                 if(matrix[i][j] == '1')
//                     v[j]++;
//                 else
//                     v[j]=0;
//             }
//             maxi=max(maxi,largestArea(v));
//         }
//         return maxi;
    // }
    int solve(vector<int> &heights){
        int n = heights.size();
        vector<int> nslr(n),nsrl(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()] >= heights[i]) st.pop();
            if(st.empty()) nslr[i] = -1;
            else nslr[i] = st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
          for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()] >= heights[i]) st.pop();
            if(st.empty()) nsrl[i] = n;
            else nsrl[i] = st.top();
            st.push(i);
        }

        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,heights[i]*(nsrl[i]-nslr[i]-1));
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int ans = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> heights(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == '0'){
                    heights[j] = 0;
                }else{
                    heights[j]+=1;
                }
            }
            ans = max(ans,solve(heights));
        }
        return ans;
        
    }
};