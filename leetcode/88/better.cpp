class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1, j = 0;

        if (i >= 0 && j < n && nums1[i] > nums2[j]) {
            while (i >= 0 && j < n && nums1[i] > nums2[j]) {
                swap(nums1[i], nums2[j]);
                i--;
                j++;
            }

            sort(nums1.begin(), nums1.begin() + m);
            sort(nums2.begin(), nums2.end());
        }

        for (int k = m; k < m + n; k++)
            nums1[k] = nums2[k - m];
    }
};
