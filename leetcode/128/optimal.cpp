class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        int len = 0, maxLen = 0;
        unordered_set<int> s;
        for (auto& i : nums)
            s.insert(i);
        for (auto& i : s) {
            if (s.find(i - 1) != s.end())
                continue;
            int num = i;
            do {
                len++;
                num++;
            } while (s.find(num) != s.end());
            maxLen = max(len, maxLen);
            len = 0;
        }

        return maxLen;
    }
};
