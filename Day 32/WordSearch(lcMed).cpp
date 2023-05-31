bool dfs(int i, int j, string pat, int index, vector<vector<char>>& board, vector<vector<bool>>&vis)
{
    if(index == (pat.size())) return 1;
    int n = board.size();
    int m = board[0].size();
    if(i<0 || j<0 || i>= n || j>= m) return 0;
        
    if(vis[i][j] == true) return 0;
    if(board[i][j] !=  pat[index]) return 0;
    
    vis[i][j] = true;
    bool a = dfs(i-1, j, pat, index + 1, board, vis);
    bool b = dfs(i+1, j, pat, index + 1, board, vis);
    bool c = dfs(i, j-1, pat, index + 1, board, vis);
    bool d = dfs(i, j+1, pat, index + 1, board, vis);
    vis[i][j] = false;
    return (a|b|c|d);
}
bool exist(vector<vector<char>>& board, string word) 
{
    int n = board.size(), m = board[0].size();
    vector<vector<bool>>vis(n, vector<bool>(m, 0));
    for(int i = 0; i< board.size(); i++)
        for(int j = 0; j<board[0].size(); j++)
            if(board[i][j] == word[0])
                if(dfs(i, j, word, 0, board, vis)) 
                    return true;
    return false;
}