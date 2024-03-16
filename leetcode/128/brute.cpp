class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (!nums.size())
            return 0;
        set<int> s;
        for (auto& i : nums)
            s.insert(i);
        int len = 0, maxLen = 0, num = 0;
        for (auto& i : s) {
            if (len == 0) {
                len++;
                maxLen = max(len, maxLen);
            } else {
                if (i == num + 1) {
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
