class Solution {
public:
    bool checkValidString(string s) {
//         int leftMin = 0, leftMax = 0;

//         for (char c : s) {
//             if (c == '(') {
//                 leftMin++;
//                 leftMax++;
//             } else if (c == ')') {
//                 leftMin--;
//                 leftMax--;
//             } else {
//                 leftMin--;
//                 leftMax++;
//             }
//             if (leftMax < 0) return false;
//             if (leftMin < 0) leftMin = 0;
//         }
        
//         return leftMin == 0;
        
//======================================================================================      
        
        int n=s.size();
        stack<char>open;
        stack<char>star;
        for(int i=0;i<n;i++){
            if(s[i]=='(')
                open.push(i);
            else if(s[i]=='*')
                star.push(i);
            else{
                if(!open.empty())
                    open.pop();
                else if(!star.empty())
                    star.pop();
                else
                    return false;
            }
        }
        while(!open.empty()){
            if(star.empty())
                return false;
            else if(open.top()<star.top()){
                open.pop();
                star.pop();
            }
            else
                return false;
        }
        return true;
        
    }
};