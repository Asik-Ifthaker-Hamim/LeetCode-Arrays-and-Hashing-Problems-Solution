class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int pr=1;
        int f=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            pr*=nums[i];
            else
            f++;
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0 && f==0)
            v.push_back(pr/nums[i]);
            else if(nums[i]!=0 && f!=0)
            v.push_back(0);
            else if(nums[i]==0 && f==1)
            v.push_back(pr);
            else if(nums[i]==0 && f>=2)
            v.push_back(0);

        }
        return v;
    }
};
