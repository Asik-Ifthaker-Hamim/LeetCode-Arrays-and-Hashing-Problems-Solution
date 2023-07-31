 bool Sort(const pair<int,int>&a,const pair<int,int>&b)
     {
         return a.second>b.second;
     }
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>>p;
        for(auto &i:mp)
        {
            p.push_back({i.first,i.second});
        }
        sort(p.begin(),p.end(),Sort);
        vector<int>v;
        for(auto &i:p)
        {
                if(k==0)
                break;
                else
                {
                v.push_back(i.first);
                k--;
                }
        }
        return v;
    }
};
