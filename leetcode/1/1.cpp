typedef pair<int, int> pi;

class Solution {

public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pi> mp;
        for (int i = 0; i < nums.size(); i++)
            mp.push_back({nums[i], i});
        sort(mp.begin(), mp.end());
        for (int s = 0, e = nums.size() - 1; s < e;) {
            int val = mp[s].first + mp[e].first;
            if (target == val)
                return {mp[s].second, mp[e].second};
            else if (target < val)
                e--;
            else
                s++;
        }

        return {};
    }
};
