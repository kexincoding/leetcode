class Solution {
public:
    int findCircleNum(vector<vector<int> >& M) {
        int x=M.size(),count=0;
        //vector<bool> mark(x,false);
        int mark[201]={0};
        for(int i=0;i<x;i++)
        {
            if(mark[i]==0)
            {
                dfs(M,i,mark);
                count++;
            }
        }
        return count;
    }

    void dfs(vector<vector<int> >& M, int i,int mark[201])
    {
         for(int j=0;j<M.size();j++)
         {
             if(M[i][j]==1&&mark[j]==0)
             {
                 mark[j]=1;
                 dfs(M,j,mark);
             }
         }
    }

};
