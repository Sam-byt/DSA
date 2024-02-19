class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = nums[0], next = 1;
        for (int i = 1; i < nums.size(); i++)
            if (prev < nums[i])
                nums[next++] = prev = nums[i];

        return next;
    }
};
