class Solution {
public:
//     long long int factorial(int n){
//         if(n==0||n==1)
//             return 1;
        
//         return n*factorial(n-1);
//     }
    int trailingZeroes(int n) {
        // int count=0;
        // long long result=factorial(n);
        // while(result>0){
        //     int rem=result%10;
        //     if(rem==0)
        //         count++;
        //     else
        //         break;
        //     result/=10;
        // }
        // return count;
        
        
        int count = 0;
        
        while (n >= 5) {
            count += n / 5;
            n /= 5;
        }
        
        return count;
    }
};