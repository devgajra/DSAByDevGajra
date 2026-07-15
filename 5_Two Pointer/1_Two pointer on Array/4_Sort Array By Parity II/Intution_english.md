INTUITION ->

Problem ->

In this problem, an array of size n is given to us, and this array contains half odd and half even values. We have to place the odd values at the odd indices and the even values at the even indices.

Think about it. This is an application of the learning we gained from the last problem.

Learning ->

Whenever we have to divide an array into groups based on some condition, we can think of the two-pointer approach.

Here ->

We have to divide the array into two groups:

Group of even integers
Group of odd integers

Condition on which we divide ->

Odd values should be at odd indices.
Even values should be at even indices.

Let's use two pointers: i and j.

i -> gives us the location where the next even value should be placed.
j -> gives us the location where the next odd value should be placed.

I am thinking in this way because there are half even and half odd integers. If we somehow place all the even integers at the even indices, then our problem is solved.

I start with the i pointer at index 0. Then I check its corresponding value. There are two possibilities.

Case 1: val is even

In this case, I move to the next even index by incrementing the i pointer by 2.

Case 2: val is odd

In this case, I place this odd value where it should have been, at the jth index, by swapping the values at the ith and jth indices.

Then, I move the j pointer to the next odd index by incrementing it by 2.

However, I cannot move the i pointer because I am not aware of the current value at the ith index after the swap. It can be either even or odd.

By following this process, there is a possibility that either i or j will cross the array. At that point, we have to stop because it will only happen when all the even values are placed at the even indices or all the odd values are placed at the odd indices.

Time Complexity -> O(n)

Space Complexity -> O(1)