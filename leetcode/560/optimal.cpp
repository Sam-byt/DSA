class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefix_sum;
        int sum = 0, cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int key = sum - k;
            if (sum == k)
                cnt++;
            if (prefix_sum.find(key) != prefix_sum.end())
                cnt += prefix_sum[key];
            prefix_sum.find(sum) == prefix_sum.end() ? prefix_sum[sum] = 1
                                                     : prefix_sum[sum] += 1;
        }

        return cnt;
    }
};
