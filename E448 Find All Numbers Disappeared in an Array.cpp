class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        int length1=nums.size(),a=1,length2,i=0;
        vector<int> ans;
        sort(nums.begin(), nums.end());
        vector<int>::iterator iter = unique(nums.begin(), nums.end());
        nums.erase(iter, nums.end());
        length2=nums.size();
        while(a<=length1)
        {
            if(nums[i]==a)
            {
                i++;
            }
            else
            {
                ans.push_back(a);

            }
            a++;
        }

        return ans;
    }
};
