class Solution
{
public:
    int nextGreaterElement(int n)
    {
        string num=to_string(n);
        int len=num.size(),m=100,p,t,flag=0,i,j;
        if(len==0||len==1)
            return -1;
        for(i=len-2; i>=0; i--)
        {

            for( j=i+1; j<len; j++)
            {
                if(num[i]<num[j])
                {
                    t=num[j]-num[i];

                    if(t<m)
                    {
                        m=t;
                        p=j;
                        flag=1;
                    }
                }
            }
            if(flag==1)
                break;
        }
        if(flag==0)
             return -1;
        swap(num[i],num[p]);
        sort(num.begin()+(i+1),num.end());
        if(len>9&&num[0]>2)
            return -1;
        int ans=0;
        for(i=0; i<len; i++)
            ans=ans*10+(num[i]-'0');
        return ans;
    }
};
