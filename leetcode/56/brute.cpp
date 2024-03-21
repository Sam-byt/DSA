
class Solution {
private:
    inline static bool compareInterval(vector<int> a, vector<int> b) {
        return a[0] == b[0] ? a[1] < b[1] : a[0] < b[0];
    }

public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end(), compareInterval);
        vector<vector<int>> res;
        int s = intervals[0][0], e = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] == intervals[i - 1][0] &&
                intervals[i][1] == intervals[i - 1][1])
                continue;
            if (intervals[i][0] <= e) {
                if (intervals[i][0] < s)
                    s = intervals[i][0];
                if (intervals[i][1] > e)
                    e = intervals[i][1];
            } else {
                res.push_back({s, e});
                s = intervals[i][0], e = intervals[i][1];
            }
        }

        res.push_back({s, e});

        return res;
    }
};
