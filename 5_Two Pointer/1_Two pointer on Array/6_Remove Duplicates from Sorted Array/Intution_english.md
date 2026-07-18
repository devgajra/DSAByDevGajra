Problem

In this problem, an array is given to us. This array contains duplicate numbers and is sorted in non-decreasing order.

We have to remove the duplicate elements from the existing array and return the total number of distinct elements in the input array.

Intuition

We can solve this problem using the Two Pointers approach. I would take two pointers.

j → Gives the location where the last distinct number is placed. (Initially j = 0)
i → The index of the current processing element.

I will process all the elements of the array by varying i from 1 to n - 1. For each new element, I will put that new number at the j + 1 index.

After processing the entire array, j will point to the last distinct element.

No. of distinct elements → j + 1

Time Complexity: O(N)

Space Complexity: O(1)
