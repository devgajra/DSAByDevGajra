Problem ->

In this problem, an array and a pivot value are given to us. We have to rearrange the array in such a way that all the values less than the pivot appear before the pivot, and all the values greater than the pivot appear after the pivot. However, all the values before the pivot and after the pivot must maintain their relative order.

Intuition ->

From our past learning, I have learned that whenever we try to modify an array by rearranging its elements, it is hard to maintain the relative order in-place with an O(n) solution.

Let's think of an O(n) solution by creating an extra array ans of the same size along with two pointers, i and j.

We will first traverse the input array and place all the elements less than the pivot at the beginning of the ans array.

Each time we find an element less than the pivot, we will place it at the ith index and increment i by 1 (initially i = 0).

By following this process, we maintain the relative order of all the elements less than the pivot, and i will always point to the next available position after the last processed element.

Next, we traverse the input array from the end and place all the elements greater than the pivot at the end of the ans array.

Each time we find an element greater than the pivot, we place it at the jth index and decrement j by 1 (initially j = n - 1).

By following this process, we arrange all the elements greater than the pivot from the end while maintaining their relative order.

Finally, we fill all the remaining positions with the pivot elements.

Time Complexity -> O(3N)

Space Complexity -> O(N)

This is a three-pass solution. We can improve it to a two-pass solution.
------------------------------------------------------------------

Optimal Approach

Traverse the input array and calculate:

count1 → Total number of elements less than the pivot.
count2 → Total number of elements equal to the pivot.

Now, take three pointers:

i → Stores the elements less than the pivot (initially 0).
j → Stores the elements equal to the pivot (initially count1).
k → Stores the elements greater than the pivot (initially count1 + count2).

Now, traverse the input array again and place each element at its correct position while incrementing the corresponding pointer.

This approach also maintains the relative order because the elements are placed into their correct positions in the same order as they are encountered.

Time Complexity -> O(2N)

Space Complexity -> O(N)