class Solution {
public:
    int climbStairs(int n) {
        int a=0,b=2,c=1;
        if(n<=0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        if(n>2)
        {
            for(int i=2; i<n; i++)
            {
    	    a = b+ c;
    	    c = b;
            b = a;
            }
        return a;
        }
    }
};
