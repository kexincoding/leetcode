class Solution {  
public:  
    int trap(vector<int>& height) {  
        int curMax = 0;  
        int len = height.size();  
        vector<int>leftMax(len);  
        vector<int>rightMax(len);  
        for (int i = 0; i < len; i++)  
        {  
            leftMax[i] = curMax;
            curMax = max(curMax, height[i]);
        }  
        curMax = 0;  
        for (int i = len - 1; i >= 0; i--)  
        {  
            rightMax[i] = curMax;  
            curMax = max(curMax,height[i]);  
        }  
        int sum=0;  
        for (int i = 0; i < len; i++)  
        {  
            if (leftMax[i] != 0 && rightMax[i] != 0)  
            {  
                int temp = min(leftMax[i], rightMax[i]) - height[i];  
              
                if (temp > 0)  
                    sum += temp;  
              
            }  
        }   
        return sum;  
    }  
}; 
