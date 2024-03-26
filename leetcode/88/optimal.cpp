class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int k = m; k < m + n; k++)
            nums1[k] = nums2[k - m];
        int size = m + n;
        int gap = (size & 1) ? ((size + 1) >> 1) : (size >> 1);
        int l = 0, r = gap;
        while (gap) {

            while (r < size) {
                if (nums1[l] > nums1[r])
                    swap(nums1[l], nums1[r]);
                l++, r++;
            }

            if(gap == 1)return;

            gap = (gap & 1) ? ((gap + 1) >> 1) : (gap >> 1);
            l = 0, r = gap;


        }
    }
};
