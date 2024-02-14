class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        vector<int> v;
        for (int i = 1; i <= numRows - 1; i++) {
            v.resize(i + 1);
            v[0] = 1, v[i] = 1;
            cout << v.size();
            for (int j = 1; j < i; j++) {
                v[j] = res[i - 1][j - 1] + res[i - 1][j];
            }
            res.push_back(v);
            v.clear();
        }

        return res;
    }
};
