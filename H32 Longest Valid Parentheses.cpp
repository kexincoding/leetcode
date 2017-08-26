class Solution {
public:
    int longestValidParentheses(string s) {
        int size = s.size();
        if(size <= 1){
            return 0;
        }
        int last = -1;
        int Max = 0;
        stack<int> leftStack;
        for(int i = 0;i < size;++i){

            if(s[i] == '('){
                leftStack.push(i);
            }
            else if(s[i] == ')'){
                if(leftStack.empty()){
                    last = i;
                }
                else{
                    leftStack.pop();
                    if(leftStack.empty()){
                        Max = max(Max,i - last);
                    }
                    else{
                        Max = max(Max,i - leftStack.top());
                    }
                }
            }
        }
        return Max;
    }
};
