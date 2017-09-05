class Solution
 {
 private:
     void generateParenthesis(vector<string> &v, string s, int l, int r)
     {
         if(l == 0 && r == 0)
             v.push_back(s);

         if(l > 0)
             generateParenthesis(v, s + "(", l - 1, r);
         if(r > 0 && l < r)
             generateParenthesis(v, s + ")", l, r - 1);
     }
 public:
     vector<string> generateParenthesis(int n)
     {
         vector<string> v;
         generateParenthesis(v, "", n, n);
         return v;
     }
 };
