class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
    int low = 1, high = nums.size()-1;
    while(low<high)
    {
        int cnt = 0;
        int mid = (low + high)/2;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] <= mid)
                cnt++;
        }
        if(cnt>mid)
        {
            high = mid;
        }
        else
            low = mid+1;
    }
    return low;
  }
};
