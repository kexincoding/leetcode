// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution
{
public:
    int guessNumber(int n)
    {
        int i=1,j=n,m,ans;
        while (i <= j)
        {
            m=i+(j-i)/2;
            ans=guess(m);
            if(ans==0)
                return m;
            else if(ans==1)
                i=m+1;
            else if(ans==-1)
                j=m-1;
        }
    }
};
