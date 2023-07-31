class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<pair<int,int>>v;
        set<char>st;
        int count=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(board[i][j]>='1' && board[i][j]<='9')
                {
                st.insert(board[i][j]);
                count++;
                }
            }
        }
        v.push_back({st.size(),count});
        st.clear();
        count=0;
        for(int i=0;i<3;i++)
        {
            for(int j=3;j<6;j++)
            {
                if(board[i][j]>='1' && board[i][j]<='9')
                {
                st.insert(board[i][j]);
                count++;
                }
            }
        }
        v.push_back({st.size(),count});
        st.clear();
        count=0;
        for(int i=0;i<3;i++)
        {
            for(int j=6;j<9;j++)
            {
                if(board[i][j]>='1' && board[i][j]<='9')
                {
                st.insert(board[i][j]);
                count++;
                }
            }
        }
        v.push_back({st.size(),count});
        st.clear();
        count=0;
        for(int i=3;i<6;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(board[i][j]>='1' && board[i][j]<='9')
                {
                st.insert(board[i][j]);
                count++;
                }
            }
        }
        v.push_back({st.size(),count});
        st.clear();
        count=0;
        for(int i=3;i<6;i++)
        {
            for(int j=3;j<6;j++)
            {
                if(board[i][j]>='1' && board[i][j]<='9')
                {
                st.insert(board[i][j]);
                count++;
                }
            }
        }
        v.push_back({st.size(),count});
        st.clear();
        count=0;
        for(int i=3;i<6;i++)
        {
            for(int j=6;j<9;j++)
            {
                if(board[i][j]>='1' && board[i][j]<='9')
                {
                st.insert(board[i][j]);
                count++;
                }
            }
        }
        v.push_back({st.size(),count});
         st.clear();
         count=0;
         for(int i=6;i<9;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(board[i][j]>='1' && board[i][j]<='9')
                {
                st.insert(board[i][j]);
                count++;
                }
            }
        }
        v.push_back({st.size(),count});
        st.clear();
        count=0;
        for(int i=6;i<9;i++)
        {
            for(int j=3;j<6;j++)
            {
                if(board[i][j]>='1' && board[i][j]<='9')
                {
                st.insert(board[i][j]);
                count++;
                }
            }
        }
        v.push_back({st.size(),count});
        st.clear();
        count=0;
        for(int i=6;i<9;i++)
        {
            for(int j=6;j<9;j++)
            {
                if(board[i][j]>='1' && board[i][j]<='9')
                {
                st.insert(board[i][j]);
                count++;
                }
            }
        }
        v.push_back({st.size(),count});
        bool f=0;
        for(auto &x:v)
        {
            if(x.first!=x.second)
            {
                f=1;
            }
        }
        for(int i=0;i<9;i++)
        {
            set<char>s;
            int a=0;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]>='1' && board[i][j]<='9')
                {
                s.insert(board[i][j]);
                a++;
                }
            }
            if(s.size()!=a)
            f=1;
        }
        for(int i=0;i<9;i++)
        {
            set<char>ss;
            int b=0;
            for(int j=0;j<9;j++)
            {
                if(board[j][i]>='1' && board[j][i]<='9')
                {
                ss.insert(board[j][i]);
                b++;
                }
            }
            if(ss.size()!=b)
            f=1;
        }

        if(f)
        return false;
        else
        return true;

    }
};
