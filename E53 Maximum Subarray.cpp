
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0,max_s=INT_MIN;

        for(int i=0; i<nums.size(); i++)
        {
            if(s>=0)
                s=s+nums[i];
            else
                s=nums[i];
            if(s>max_s)
                max_s=s;
        }
        return max_s;
    }
};
