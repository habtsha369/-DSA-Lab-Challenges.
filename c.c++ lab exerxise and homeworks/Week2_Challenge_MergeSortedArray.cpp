#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // Start from the end of both nums1 and nums2
    int i = m - 1;  // Last index of nums1 (before the zeros)
    int j = n - 1;  // Last index of nums2
    int k = m + n - 1;  // Last index of nums1 (after merging)

    // Merge nums1 and nums2 from the back
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // If there are any elements left in nums2, add them to nums1
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    int m, n;

    // Input lengths of nums1 and nums2
    cout << "Enter the length of nums1 (m): ";
    cin >> m;
    cout << "Enter the length of nums2 (n): ";
    cin >> n;

    // Initialize the arrays
    vector<int> nums1(m + n, 0);
    vector<int> nums2(n);

    // Input elements for nums1
    cout << "Enter " << m << " elements for nums1: ";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    // Input elements for nums2
    cout << "Enter " << n << " elements for nums2: ";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    // Merge nums1 and nums2
    merge(nums1, m, nums2, n);

    // Output the merged result
    cout << "Merged array: ";
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
