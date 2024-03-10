class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        // finding the index breakpoint
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }

        if (idx == -1) {
            // already sorted. So, reversing will do the trick!
            reverse(nums.begin(), nums.end());
            return;
        }

        // finding the number which is just greater than the index number
        int num = INT_MAX, j = idx;
        for (int i = idx + 1; i < nums.size(); i++) {
            if (nums[i] > nums[idx] && nums[i] < num) {
                num = nums[i];
                j = i;
            }
        }

        // swap
        swap(nums[idx], nums[j]);

        // sort the rest
        sort(nums.begin() + idx + 1, nums.end());
    }
};
