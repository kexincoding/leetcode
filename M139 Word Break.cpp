class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> wordB(s.length() + 1, false);
    wordB[0] = true;
    for (int i = 1; i < s.length() + 1; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (wordB[j] && find(wordDict.begin(),wordDict.end(),s.substr(j, i - j)) != wordDict.end()) {
                wordB[i] = true;
                break;
            }
        }
    }
    return wordB[s.length()];
    }
};
