class Solution {
public:
    static bool comp(int a,int b){
        string aa = to_string(a);
        string bb = to_string(b);
        return aa+bb > bb+aa;
    }
    
    string largestNumber(vector<int>& B) {
        vector A = B;
        int n=A.size();int ct=0;
        for(int i=0;i<n;i++){
            if(A[i]==0)
            ct++;
        }
        if(ct==n)
            return "0";
        sort(A.begin(),A.end(),comp);
        string s;
        for(int i=0;i<n;i++)
            s.append(to_string(A[i]));
        return s;
    }
};