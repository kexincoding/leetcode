class Solution {
public String countAndSay(int n) {  
    if (n == 1) return "1";  
    String s = "1";  
    StringBuffer buffer = new StringBuffer();  
 
    int count = 0;  

    int round = 0;  
    int i;  
    while (++round < n) {  
        count = 1;  
        buffer.setLength(0);  
        for (i = 1; i < s.length(); i++) {  
 
            if (s.charAt(i) == s.charAt(i - 1)) {   
                count++;  
            } else {  

                buffer.append(count).append(s.charAt(i - 1));  
 
                count = 1;   
            }  
        }  
        buffer.append(count).append(s.charAt(i - 1));  

        s = buffer.toString();   
    }  
    return buffer.toString();  
} 
};
