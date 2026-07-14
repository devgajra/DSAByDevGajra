Approach 1

Problem: We are given an array of integers, and we have to return an array in which all the even integers appear first, followed by all the odd integers.

Intuition

Since we have to return a new array, let's create an array ans of the same length as the input array.

We will traverse the input array. For every integer, there are only two possibilities:

The integer is even.
The integer is odd.

If the integer is even, we will place it in the ans array from the front.

If the integer is odd, we will place it in the ans array from the back.

To keep track of the positions where these numbers should be placed, we can use two pointers.

i → It keeps track of the next position to be filled with an even integer. Whenever an even integer is placed, we increment i.
j → It keeps track of the next position to be filled with an odd integer. Whenever an odd integer is placed, we decrement j.

By following this process, the ans array will be filled with all the even integers followed by all the odd integers.

Time Complexity: O(n)

Space Complexity: O(n)

Approach 2 (Optimized)

In the previous approach, we used extra space. Can we optimize it and rearrange the given array itself to achieve O(1) space complexity?

Since we want all the even integers at the beginning of the array and all the odd integers at the end, we can again use two pointers.

i → Points to the position that should contain an even integer. Initially, i = 0.
j → Points to the position that should contain an odd integer. Initially, j = n - 1.

Now, there are two possibilities for the value at index i.

If the value is even:

It is already in the correct position, so we simply increment i.

If the value is odd:

We swap it with the value at index j and decrement j.

We do not increment i because we are not aware of the value that has been swapped from the jth position. It may be either even or odd, so it needs to be checked again.

We continue this process until i crosses j. At that point, the array is rearranged such that all the even integers appear before all the odd integers.

Time Complexity: O(n)

Space Complexity: O(1)