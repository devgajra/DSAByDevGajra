Problem ->

In this problem, we are given an array nums and a value val. We have to remove all the occurrences of val from the input array in place and move all the distinct elements to the beginning of the array.

At the end, we have to return the total number of distinct elements.

Note: We don't have to preserve the order of the elements.

Intuition ->

Whenever a problem asks us to remove some element from an array and place all the distinct elements at the beginning of the array, we should think of the Two Pointers (In-Place) approach.

Let's take two pointers:

i → We will use this pointer to traverse the array. (Initially 0)
j → We will use this pointer to place the next distinct element in the array. (Initially 0)

While traversing the array, there will be two cases:

Case 1: Current element == val

In this case, we simply move to the next element by incrementing the i pointer because we don't have to place this element at the beginning of the array.

Case 2: Current element != val

In this case, we have to place this element at the jth index because it is a distinct element. After placing it, increment the j pointer by 1.

By following this process, all the distinct elements will be placed at the beginning of the array.

Number of Distinct Elements -> j+1 

Time Complexity -> O(N)

Space Complexity -> O(1)