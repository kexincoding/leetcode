class Solution
{
public:
    bool isPalindrome(string s)
    {
        int end,begin=0;
        end=s.size()-1;
        if(s.empty())
            return true;
        while (true)
        {
            while (begin < s.size() && !isalnum(s[begin]))
            {
                begin++;
            }
            while (end >= 0 && !isalnum(s[end]))
            {
                end--;
            }
            if (end <= begin)
                return true;
            if (tolower(s[begin]) != tolower(s[end]))
            {
                return false;
            }
            begin++;
            end--;
        }
    }
};
