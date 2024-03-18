class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1 = INT_MAX, num2 = INT_MAX, cnt1 = 0, cnt2 = 0;
        for (auto& i : nums) {
            if (cnt1 == 0 && i != num2) {
                num1 = i;
                cnt1 = 1;
            } else if (cnt2 == 0 && i != num1) {
                num2 = i;
                cnt2 = 1;
            } else if (i == num1)
                cnt1++;
            else if (i == num2)
                cnt2++;
            else {
                cnt1--, cnt2--;
            }
        }

        cnt1 = 0, cnt2 = 0;

        for (auto& i : nums) {
            if (num1 == i)
                cnt1++;
            if (num2 == i)
                cnt2++;
        }

        int n = nums.size() / 3;

        if (cnt1 > n && cnt2 > n)
            return {num1, num2};
        if (cnt1 > n)
            return {num1};
        if (cnt2 > n)
            return {num2};
        return {};
    }
};
