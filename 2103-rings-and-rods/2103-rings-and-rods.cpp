class Solution {
public:
    int countPoints(string rings) {
        int rgb[]={1,2,4};
        vector<int> v(10);
        for(int i=0;i<rings.size();i+=2){
            char color=rings[i];
            int colorIdx=0;
            if(color=='G') colorIdx=1;
            else if(color=='B') colorIdx=2;
            int rod=rings[i+1]-'0';
            v[rod]=v[rod] | rgb[colorIdx];
        }
        int c=0;
        for(auto x:v){
            if(x==7)
                c++;
        }
        return c;
    }
};