class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(n + m);
        int i = 0, j = 0, idx = 0;
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                temp[idx++] = nums1[i++];
            } else {
                temp[idx++] = nums2[j++];
            }
        }

        while (i < m) {
            temp[idx++] = nums1[i++];
        }

        while (j < n) {
            temp[idx++] = nums2[j++];
        }

        for (int k = 0; k < m + n; k++)
            nums1[k] = temp[k];
    }
};
