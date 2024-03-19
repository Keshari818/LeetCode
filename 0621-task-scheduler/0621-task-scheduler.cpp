class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int>mp;
        for(auto x: tasks)
            mp[x]++;
        priority_queue<int>pq;
        for(auto x:mp)
            pq.push(x.second);
        int result=0;
        while(!pq.empty()){
            int time=0;
            vector<int>v;
            for(int i=0;i<n+1;i++){
                if(!pq.empty()){
                    v.push_back(pq.top()-1);
                    pq.pop();
                    time++;
                }
            }
            for(auto x:v)
                if(x)
                    pq.push(x);
            result+= pq.empty() ? time : n+1;
        }
        return result;
    }
    
};