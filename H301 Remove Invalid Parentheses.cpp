class Solution {
public:
    private:
    bool isValid(string s){
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                count++;
            else if(s[i]==')'){
                if(count==0)
                    return false;
                count--;
            }
        }
        return count==0;
    }
    vector<string> ret;
public:
    vector<string> removeInvalidParentheses(string s) {
        unordered_map<string,int> map;
        queue<string> q;
        q.push(s);
        map[s]=1;
        bool found=false;
        while(!q.empty()){
            string str=q.front();
            q.pop();
            if(isValid(str)){
                ret.push_back(str);
                found=true;
            }
            if(found)
                continue;

            for(int i=0;i<str.length();i++){
                if(str[i]!='('&&str[i]!=')')
                    continue;
                string sub=str.substr(0,i)+str.substr(i+1);
                if(map.find(sub)==map.end()){
                    q.push(sub);
                    map[sub]=1;
                }
            }
        }
        return ret;
    }

};
