class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        int ret = 0;
        unordered_map<int, bool> m;
        for(int i = 0; i < num.size(); i ++)
            m[num[i]] = false;

        for(int i = 0; i < num.size(); i ++)
        {
            if(m[num[i]] == false)
            {
                int cur = 1;
                int left = num[i]-1;
                while(m.find(left) != m.end() && m[left] == false && left >= INT_MIN)
                {
                    m[left] = true;
                    cur ++;
                    left --;
                }
                int right = num[i]+1;
                while(m.find(right) != m.end() && m[right] == false && right <= INT_MAX)
                {
                    m[right] = true;
                    cur ++;
                    right ++;
                }
                ret = max(ret, cur);
            }
        }
        return ret;
    }
};
