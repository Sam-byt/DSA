class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int key = -nums[i];
            for (int s = i + 1, e = n - 1; s < e;) {
                int sum = nums[s] + nums[e];
                if (key == sum) {
                    res.push_back({nums[i], nums[s], nums[e]});
                    int beg = nums[s], end = nums[e];
                    while (s < e && beg == nums[s] && end == nums[e]) {
                        s++;
                        e--;
                    }
                } else if (key < sum)
                    e--;
                else
                    s++;
            }
        }
        return res;
    }
};
