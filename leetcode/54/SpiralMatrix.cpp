class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int rowbeg = 0, rowend = m - 1, colbeg = 0, colend = n - 1, cnt = m * n;
        vector<int> res;

        while (cnt) {
            for (int i = colbeg; cnt && i <= colend; i++) {
                res.push_back(matrix[rowbeg][i]);
                cnt--;
            }
            rowbeg++;
            for (int i = rowbeg; cnt && i <= rowend; i++) {
                res.push_back(matrix[i][colend]);
                cnt--;
            }
            colend--;
            for (int i = colend; cnt && i >= colbeg; i--) {
                res.push_back(matrix[rowend][i]);
                cnt--;
            }
            rowend--;
            for (int i = rowend; cnt && i >= rowbeg; i--) {
                res.push_back(matrix[i][colbeg]);
                cnt--;
            }
            colbeg++;
        }

        return res;
    }
};
