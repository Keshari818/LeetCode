class Solution {
public:
    bool isFascinating(int n) {
        int x=2*n;
        int y=3*n;
        if(x>1000 || y>1000)
            return false;
        n=(n*1000+x)*1000+y;
        cout<<n<<endl;
        int a[10]={-1};
    
        while(n>0){
            int rem=n%10;
            if(rem==0)
                return false;
            n/=10;
            if(a[rem]==1)
                return false;
            else
                a[rem]=1;
            
        }
        return true;
    }
};