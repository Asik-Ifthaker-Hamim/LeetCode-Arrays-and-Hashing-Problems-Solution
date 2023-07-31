class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        bool f=false;
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]==0)
            {
                mp[nums[i]]++;
            }
            else
            {
                f=true;
            }
        }
        return f;
    }
};
