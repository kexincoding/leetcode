class Solution {
public:
    string reverseString(string s) {
        for(int i=0,j=s.size()-1; i<s.size(),j>=i; i++,j--)
        {
            if(s[i]!=s[j])
                swap(s[i],s[j]);
            if(i==j)
                break;
        }
        return s;
    }
};
