class Solution {
public:
    int myAtoi(string s) {
        int len = s.size();
        double num = 0;
        int i=0;
        while(s[i] == ' '){
            i++;
        }
        bool positive = s[i] == '+';
        bool negative = s[i] == '-';
        positive == true ? i++ : i;
        negative == true ? i++ : i;
        while(i < len && s[i] >= '0' && s[i] <= '9'){
            num = num*10 + (s[i]-'0');
            i++;
        }
        num = negative ? -num : num;
        num = (num > INT_MAX) ? INT_MAX : num;
        num = (num < INT_MIN) ? INT_MIN : num;
        return int(num);
        
        
//         int result=0; 
//         int i=0;    
//         int sign = 1; 
        
    
//         while(s[i])
//         {
//             while(s[i]==' ')
//                 i++;
//             if(s[i]=='-') 
//             {
//                 sign = -1;
//                 i++;
//             }
//             else{ 
//                 if(!(s[i]-'0'>=0 && s[i]-'0'<=9))
//                     break;
//                 else if(i<=s.size()){
//                     result = result*10 + s[i]-'0';
//                     i++;
//                 }
//             }
//         }
//         return result*sign;
    }
};