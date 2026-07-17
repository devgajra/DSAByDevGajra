Problem

We are given an array of length n containing an equal number of positive and negative integers.

We have to rearrange the array so that positive and negative numbers appear in consecutive pairs while preserving the relative order of both positive and negative elements.

Intuition

This problem is very similar to Sort Array By Parity II, where we place even numbers at even indices and odd numbers at odd indices.

In both problems, we are simply dividing the array into two groups based on a condition. From our previous learning, the two-pointer approach naturally comes to mind.

However, this problem has an additional constraint: the relative order of positive and negative elements must be preserved. It is not possible to satisfy this condition using a single traversal with an in-place solution.

So, by prioritizing time complexity over space complexity, I came up with the following approach.

Approach

Let's create an answer array of length n.

Now, take two pointers:

i → points to the index where the next positive number should be placed.
j → points to the index where the next negative number should be placed.

Initialize:

i = 0
j = 1

Now, traverse the input array once.

For each element:

If the value is positive, place it at index i in the answer array and increment i by 2.
If the value is negative, place it at index j in the answer array and increment j by 2.

By following this process, after traversing the entire input array, we obtain the desired arrangement while preserving the relative order of both positive and negative elements.

Complexity Analysis

Time Complexity: O(N)
Space Complexity: O(N)