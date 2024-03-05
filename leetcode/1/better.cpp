typedef pair<int, int> pi;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pi> temp;
        for (int i = 0; i < n; i++)
            temp.push_back({nums[i], i});
        sort(temp.begin(), temp.end());
        for (int i = 0, j = n - 1; i < j;) {
            int s = temp[i].first + temp[j].first;
            if (target == s)
                return {temp[i].second, temp[j].second};
            else if (target < s)
                j--;
            else
                i++;
        }
        return {};
    }
};
