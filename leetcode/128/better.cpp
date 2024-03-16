class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = 0, maxLen = 0, num = 0;
        for (auto& i : nums) {
            if (len == 0) {
                len++;
                maxLen = max(len, maxLen);
            } else {
                if (i == num)
                    continue;
                else if (i == num + 1) {
                    len++;
                    maxLen = max(len, maxLen);
                } else
                    len = 1;
            }
            num = i;
        }
        return maxLen;
    }
};
