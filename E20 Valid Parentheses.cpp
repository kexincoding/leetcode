
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstdio>
#include <stack>
using namespace std;



class Solution {
public:
    bool isValid(string s)
    {
        int length=s.size();
        if((length/2)*2!=length)
            return false;
        if(s[0]==')'||s[0]==']'||s[0]=='}')
            return false;

        stack<char> sta;

        for(int i=0;i<length;i++){
           // char cur = s.charAt(i);
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                sta.push(s[i]);
            }
            else
                {
                switch(s[i]){
                    case ')':
                        if(sta.empty() || sta.top() != '('){
                            return false;
                        }
                        sta.pop();
                        break;
                    case ']' :
                        if(sta.empty() || sta.top() != '['){
                            return false;
                        }
                        sta.pop();
                        break;
                    case '}' :
                        if(sta.empty() || sta.top() != '{'){
                            return false;
                        }
                        sta.pop();
                        break;
                    default :
                        break;
                }
            }
        }
        if(sta.empty())
            return true;
        else
            return false;
    }
};

int main()
{
    bool b;
    string a;
    cin >>a;
    Solution ss;
    b=ss.isValid(a);
    if(b)
        cout<< "yes";
    else
        cout<< "no";
    return 0;
}
