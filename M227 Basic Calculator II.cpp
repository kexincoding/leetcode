class Solution {
public:

    int calculate(string s) {

        stack<long long> numStack;

        long long num = 0;
        char sign = '+';
        for (size_t i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
            {
                num = num * 10 + s[i] - '0';
            }

            if (!isdigit(s[i]) && !isspace(s[i]) || i == s.size()-1)
            {
                switch (sign)
                {
                case '+':
                    break;
                case '-':
                    num = -num;
                    break;
                case '*':
                    num = numStack.top() * num;
                    numStack.pop();
                    break;
                case '/':
                    num = numStack.top() / num;
                    numStack.pop();
                    break;
                default:
                    break;
                }

                numStack.push(num);
                num  = 0;
                sign = s[i];
            }
        }

        while (!numStack.empty())
        {
            num += numStack.top();
            numStack.pop();
        }

        return (int)num;
    }

};
