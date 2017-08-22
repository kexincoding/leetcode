#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstdio>
using namespace std;
#define EOF (-1)


class Solution {
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
            || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }
public:
    string reverseVowels(string s) {
        int lIdx = 0, rIdx = s.size()-1;
        bool lRdy = false, rRdy = false;
        while(lIdx < rIdx) {
            while(lIdx < rIdx && !lRdy) {
                if(isVowel(s[lIdx])) lRdy = true;
                else lIdx++;
            }
            while(lIdx < rIdx && !rRdy) {
                if(isVowel(s[rIdx])) rRdy = true;
                else rIdx--;
            }
            if(lRdy && rRdy) swap(s[lIdx++], s[rIdx--]);
            lRdy = false;
            rRdy = false;
        }
        return s;
    }
};

int main()
{
     string a,b;
     cin >>a;
     Solution ss;
     b=reverseVowels(a);
     cout<<b;
     return 0;
}
