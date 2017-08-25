class Solution {  
public:  
    int numDecodings(string s) {  
        int length=s.size();  
        if(length==0)  
            return 0;  
              
        int current=s[0]=='0'?0:1;  
        int last=1;  
        for(int i=1;i<length;i++)  
        {  
            int tmp=current;  
            if(s[i]=='0')  
            {  
                if(s[i-1]=='1'||s[i-1]=='2')  
                     current=last;  
                else   
                    return 0;  
            }  
            else if(s[i-1]=='1'||s[i-1]=='2'&&s[i]<='6')  
                current+=last;  
            else   
                current=current;  
              
            last=tmp;  
        }  
          
        return current;  
    }  
};  
