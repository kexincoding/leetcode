class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int p,q,sum;
        double ans;
        p=nums1.size();
        q=nums2.size();
        vector<int> all;
        all.insert(all.end(),nums1.begin(),nums1.end());
        all.insert(all.end(),nums2.begin(),nums2.end());
        sort(all.begin(),all.end());
        sum=p+q;
        if(sum%2==0)
            ans=(double)(all[sum/2]+all[sum/2-1])/2;
        else
            ans=(double)all[(sum-1)/2];
        return ans;
    }
};
