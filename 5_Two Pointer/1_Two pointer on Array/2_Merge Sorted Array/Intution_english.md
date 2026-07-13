Merge Sorted Array

Problem

We are given two sorted arrays.

nums1
Size = m + n

The first m elements are valid.

The last n elements are 0 and are only there to provide extra space.

nums2
Size = n

Contains n sorted elements.

The task is to merge both arrays into nums1 so that the final array remains sorted.


Approach 1 : Brute Force

The first idea that came to my mind was to use the Two Pointer approach.

Initially, place one pointer at the beginning of each array and compare their values.

There are three possibilities.

Case 1 : val1 > val2

Insert val2 at the position of val1.

Before inserting, shift all the remaining elements of nums1 one position to the right.
move the both pointers forward .

Case 2 : val1 < val2

val1 is already at the correct position.

Simply move the first pointer forward.

Case 3 : val1 == val2

Do the same as Case 1.

Continue this process until one array is completely processed.

Finally, copy the remaining elements of the other array.

Time Complexity : O(m × n)

Space Complexity : O(1)


Approach 2 : Better Solution

To reduce the time complexity, create a new array of size m + n.

Again, use two pointers.

Case 1 : val1 > val2

Insert val2 into the new array.

Move the second pointer.

Case 2 : val1 < val2

Insert val1 into the new array.

Move the first pointer.

Case 3 : val1 == val2

Insert either value into the new array.

Move the corresponding pointer.

If one array gets completely processed, directly copy the remaining elements of the other array.

Finally, copy the new array back into nums1.

Time Complexity : O(m + n)

Space Complexity : O(m + n)


Approach 3 : Optimal Solution

One important observation is that nums1 already has enough empty space to store all the elements.

Instead of creating a new array, we can use this extra space.

If we start filling from the beginning, we may overwrite elements that have not been processed yet.

To avoid this, we start filling the array from the end.

Use three pointers.

i = m - 1 → Last valid element of nums1

j = n - 1 → Last element of nums2

k = m + n - 1 → Last position of nums1

There are three possibilities.

Case 1 : nums1[i] > nums2[j]

Place nums1[i] at index k.

Move i-- and k--.

Case 2 : nums1[i] < nums2[j]

Place nums2[j] at index k.

Move j-- and k--.

Case 3 : nums1[i] == nums2[j]

Place either value at index k.

Move the corresponding pointer and k.

Continue until one array is completely processed.

If nums2 is exhausted first, the remaining elements of nums1 are already in the correct position.

If nums1 is exhausted first, copy the remaining elements of nums2 into nums1.

Time Complexity : O(m + n)

Space Complexity : O(1)


