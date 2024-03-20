class Solution {
public:
    int splitNum(int num) {
        vector<int>v;
        while(num>0){
            int rem=num%10;
            v.push_back(rem);
            num/=10;
        }
        sort(begin(v),end(v));
        int n=v.size();
        int sum=0,sum2=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                sum=(sum*10)+v[i];
            }
            else
                sum2=(sum2*10)+v[i];
        }
        return sum+sum2;
    }
};