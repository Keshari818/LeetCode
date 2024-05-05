class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(begin(people), end(people));
        int i=0 , cnt=0;
        int j=people.size()-1;
        while(i<=j){
            if(people[i]+people[j]<=limit){
                i++;
                j--;
                cnt++;
            }
            else{
                cnt++;
                j--;
            }
        }

        return cnt;
    }
};