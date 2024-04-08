class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        reverse(begin(sandwiches),end(sandwiches));
        queue<int>q;
        int res=0,n=students.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            q.push(students[i]);
            st.push(sandwiches[i]);
        }
        while(!q.empty()){
            int s=q.size();
            int count=0;
            for(int i=0;i<s;i++){
                
                int a=q.front();
                q.pop();
                int b=st.top();
                if(a==b){
                    st.pop();
                    res++;
                    break;
                }
                else{
                    count++;
                    q.push(a);
                }
            }
            if(count>=s)
                break;
        }
        return n-res;
    }
};