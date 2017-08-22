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
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        if(n&(n-1))
            return false;
        else
            return true;
    }
};

int main()
{
    bool b;
    int a;
    cin>>a;
    Solution ss;
    b=ss.isPowerOfTwo(a);
    if(b)
        cout<< "yes";
    else
        cout<< "no";
    return 0;
}
