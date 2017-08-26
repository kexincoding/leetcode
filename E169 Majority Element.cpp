class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0,now;
        for(int i=0;i<nums.size();i++)
        {
             if(cnt == 0){
                now = nums[i];
                cnt = 1;
            }else{
                if(now == nums[i])
                    cnt++;
                else cnt--;
            }
        }
        return now;
    }
};
