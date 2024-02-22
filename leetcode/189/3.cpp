class Solution {
private:
    void solve(vector<int>& v, int n, int k) {
        if (k == 0)
            return;
        int temp = v[n - 1];
        for (int i = n - 1; i > 0; i--)
            v[i] = v[i - 1];
        v[0] = temp;
        solve(v, n, k - 1);
    }

public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        solve(nums, n, k);
    }
};
