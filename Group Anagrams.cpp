class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string> > s(1000000);
        for(int i=0;i<strs.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                s[i][j]=(strs[i]);
            }
        }
        return s;
    }
};
