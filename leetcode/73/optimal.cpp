class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool row = false, col = false, flag = false;
        int m = matrix.size(), n = matrix[0].size();

        for (int i = 1; i < m; i++)
            if (matrix[i][0] == 0)
                row = true;
        for (int i = 1; i < n; i++)
            if (matrix[0][i] == 0)
                col = true;

        if ((row & col) | (matrix[0][0] == 0))
            flag = true;

        for (int i = m - 1; i > 0; i--) {
            for (int j = n - 1; j > 0; j--) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        for (int i = m - 1; i > 0; i--) {
            for (int j = n - 1; j > 0; j--)
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
        }

        for (int i = 1; i < m; i++)
            if (row | flag)
                matrix[i][0] = 0;
        for (int i = 1; i < n; i++)
            if (col | flag)
                matrix[0][i] = 0;

        if (row | col)
            matrix[0][0] = 0;
    }
};
