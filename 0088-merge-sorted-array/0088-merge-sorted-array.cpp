class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int last = 0;
        int first = 0;
        while (last < n) {

            while (nums1[first] <= nums2[last] && first < m) {
                first++;
            }

            for (int j=m-1; j >= first; j--)
            {

                nums1[j + 1] = nums1[j];
            }

            nums1[first] = nums2[last];
            last++;
            m++;
        }
    }
};