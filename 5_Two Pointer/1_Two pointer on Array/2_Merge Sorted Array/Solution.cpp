

class Solution {
public:

    // Approach 1 : Brute Force (Shifting)

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = 0, j = 0;

        while (i < m && j < n) {

            if (nums1[i] > nums2[j]) {

                for (int k = m; k > i; k--)
                    nums1[k] = nums1[k - 1];

                nums1[i] = nums2[j];

                i++;
                j++;
                m++;
            }
            else {
                i++;
            }
        }

        while (j < n) {
            nums1[m] = nums2[j];
            m++;
            j++;
        }
    }
}; 



class Solution {
public:

    // Approach 2 : Better Solution (Extra Array)

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> num;

        int i = 0, j = 0;

        while (i < m && j < n) {

            if (nums1[i] <= nums2[j]) {
                num.push_back(nums1[i]);
                i++;
            }
            else {
                num.push_back(nums2[j]);
                j++;
            }
        }

        while (i < m) {
            num.push_back(nums1[i]);
            i++;
        }

        while (j < n) {
            num.push_back(nums2[j]);
            j++;
        }

        for (int i = 0; i < m + n; i++)
            nums1[i] = num[i];
    }
};



class Solution {
public:

    // Approach 3 : Optimal Solution (Three Pointers)

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {

            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            }
            else {
                nums1[k] = nums2[j];
                j--;
            }

            k--;
        }

        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};