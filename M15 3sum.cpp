vector<vector<int> > threeSum(vector<int>& nums) {
    vector<vector<int> > result;
    int length = nums.size();
    if (length < 3 )
        return result;
    sort(nums.begin(), nums.end());
    for (int i=0; i<length-2; i++)
    {
        int begin = i+1;
        int end = length -1;
        if (i>0 && nums[i]==nums[i-1])
            continue;

        while(begin <end)
        {
            if (begin>i+1 && nums[begin]== nums[begin-1])
            {
                begin++;
                continue;
            }
            if (end<length-1 && nums[end] == nums[end+1])
            {
                end--;
                continue;
            }
            int sum = nums[i] + nums[begin] + nums[end];
            if (sum < 0)
            {
                begin ++;
            }else if (sum == 0)
            {
                vector<int> tmp;
                tmp.push_back(nums[i]);
                tmp.push_back(nums[begin]);
                tmp.push_back(nums[end]);
                result.push_back(tmp);
                begin++;
            }else{
                end--;
            }

        }
    }
    return result;
}
