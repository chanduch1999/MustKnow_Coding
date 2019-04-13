class Solution {
    public:
        int c = 0, ro, co;

    bool isSafe(vector < vector < char >> & grid, int i, int j) {//Remember&
        if (i >= 0 and i < ro and j >= 0 and j < co)
            return (grid[i][j] == '1');
        else
            return false;
    }
    void dfs(vector < vector < char >> & grid, int i, int j) {
        static int u[] = {-1, 1, 0, 0 }; //NSWE
        static int d[] = {0,0,-1,1};
        grid[i][j] = '2'; //To mark as visited using vis array will give TLE
        for (int k = 0; k < 4; k++) {

            if (isSafe(grid, (i + u[k]), (j + d[k])))
                dfs(grid, (i + u[k]), (j + d[k]));

        }
    }
    int numIslands(vector < vector < char >> & grid) {
        if ((int) grid.size() == 0)
            return 0;
        size_t col = grid[0].size(), row = grid.size();
        ro = row;
        co = col;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == '1') {
                    dfs(grid, i, j);
                    c++;
                }
            }
        }
        return c;
    }

};
//https://leetcode.com/problems/number-of-islands/submissions/
//https://www.geeksforgeeks.org/find-number-of-islands/
