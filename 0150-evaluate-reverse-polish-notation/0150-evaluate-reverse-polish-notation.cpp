class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "/" && tokens[i] != "*"){
                s.push(stoi(tokens[i]));                //if a[i] is an integer, push to the stack
            }
            else{                                 //else apply the operation
                int x = s.top(); s.pop();
                int y = s.top(); s.pop();
                
                if(tokens[i] == "+"){
                    s.push(y + x);
                }
                
                else if(tokens[i] == "-"){
                    s.push(y - x);                 //Notice that operation is y - x not x - y
                }
                
                else if(tokens[i] == "*"){
                    s.push(y * x);
                }
                
                else if(tokens[i] == "/"){
                    s.push(y / x);                 //Notice that operation is y/x not x/y
                }
            }
        }
        return s.top();
    }
};