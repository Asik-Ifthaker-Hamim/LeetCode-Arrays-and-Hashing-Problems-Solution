class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        int count=0;
        int ans=0;
        int n=nums.size();
        if(n!=0)
        {
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        vector<int>a;
        for(auto i:st)
        {
            a.push_back(i);
        }
        for(int i=0;i<a.size()-1;i++)
        {
            if(abs(a[i]-a[i+1])==1)
            {
                count++;
            }
            else
            {
                ans=max(ans,count);
                count=0;
            }
        }
        ans=max(ans,count);
        return ans+1;
        }
        else
        return 0;
    }
};
