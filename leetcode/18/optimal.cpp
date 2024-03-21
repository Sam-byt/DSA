
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < n - 2; j++) {
                if(j > i+1 && nums[j] == nums [j-1])continue;
                long long temp = nums[i] + nums[j];
                if(temp > INT_MAX)return res;
                long long key = target - temp;
                for (int s = j + 1, e = n - 1; s < e;) {
                    long long sum = nums[s] + nums[e];
                    if (key == sum) {
                        res.push_back({nums[i], nums[j], nums[s], nums[e]});
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
        }
        return res;
    }
};
