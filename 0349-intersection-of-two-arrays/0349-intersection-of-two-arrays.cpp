class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        set<int>s;
        vector<int>v;
        
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                vector<int>::iterator it;
                it=find(v.begin(),v.end(),nums1[i]);
                if(it!=v.end()){
                    i++;
                    j++;
                    continue;
                }
                    
                else
                    v.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j])
                j++;
            else if(nums1[i]<nums2[j])
                i++;
        }
        return v;
        
    }
};