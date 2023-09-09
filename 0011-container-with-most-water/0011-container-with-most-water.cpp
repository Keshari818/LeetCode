class Solution {
public:
    int maxArea(vector<int>& v) {
        int n=v.size();
        int i=0;
        int j=n-1;
        int max_area=0;
        while(i<j){
            int ans=(j-i)*min(v[i],v[j]);
            if(ans>max_area)
                max_area=ans;
            if(v[i]<v[j])
                i++;
            else
                j--;
        }
        return max_area;
    }
};