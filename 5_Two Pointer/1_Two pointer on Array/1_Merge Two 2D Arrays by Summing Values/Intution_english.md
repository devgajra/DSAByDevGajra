Intuition

We are given two 2D arrays of different sizes, and we have to merge them according to the given conditions.

While merging, we need to keep the following points in mind:

1. No index should be repeated in the final merged array.
2. The final merged array should be sorted in ascending order of index.
3. If the same index is present in both arrays, the value in the final array will be the sum of both values.
4. If an index is present in only one array, the corresponding element will be added to the final array as it is.

Since both arrays are already sorted in ascending order of index, we can traverse them simultaneously.

At each step:
- Compare the current elements of both arrays.
- If one index is smaller, add that element to the final array and move to the next element in that array.
- If both indices are the same, create a new element with the same index and the sum of both values, then move both pointers forward.

While following this process, one array may get completely traversed before the other.

In that case, simply add all the remaining elements of the unfinished array to the final array.

Since we always insert elements in ascending order of index, the final merged array is also sorted in ascending order.

Time Complexity

O(m + n)

n = size of the first array
m = size of the second array

Space Complexity

O(1)

Code

See solution.cpp.

Problem Link

https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/