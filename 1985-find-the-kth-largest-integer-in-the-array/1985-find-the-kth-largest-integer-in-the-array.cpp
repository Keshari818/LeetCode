class Solution {
public:
    bool static cmp(string& a,string& b){
        if(a.size()==b.size()) return a>b;
        return a.size()>b.size();
    }
    string kthLargestNumber(vector<string>& nums, int k) {
//         int n=nums.size();
//         priority_queue<string,vector<string>,cmp>q;
//         for(int i=0;i<n;i++){
//             q.push(nums[i]);
            
//         }
//         for(int i=0;i<k-1;i++){
//             q.pop();
//         }
//         return q.top();
        sort(nums.begin(),nums.end(),cmp);
        return nums[k-1];
    }
    
};