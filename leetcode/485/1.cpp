class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0, j = 0, maxlen = 0, n = nums.size();
        while (j < n) {

            while (j < n && nums[j] == 1)
                j++;
            maxlen = max(maxlen, j - i);
            i = j;

            while (j < n && nums[j] == 0) {
                i++;
                j++;
            }
        }
        return maxlen;
    }
};
