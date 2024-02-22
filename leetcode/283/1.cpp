class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zerocnt = 0, index = -1, n = nums.size();
        for (int i = 0; i < n; i++) {

            if (zerocnt == 0 & nums[i] == 0)
                index = i;
            zerocnt += (nums[i] == 0);
        }

        if (index < 0)
            return;

        int nxtidx = -1;

        while (zerocnt--) {
            bool nxt = true;
            for (int i = index + 1; i < n; i++) {
                if (nums[i] == 0 & nxt) {
                    nxt = false;
                    nxtidx = i;
                }
                if (nums[i] != 0) {
                    swap(nums[i], nums[index]);
                    index = i;
                }
            }
            if (nxt)
                return; // encountered no zeroes, so can return
            n--; // everytime 0 is moving to end, hence reducing the effectve
                 // size
            index = nxtidx;
        }
    }
};
