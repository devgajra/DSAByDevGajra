Merge Sorted Array

Problem

Hume do sorted arrays diye gaye hain.

nums1

Size = m + n

First m elements valid hain.

Last n elements 0 hain aur sirf extra space provide karne ke liye diye gaye hain.

nums2

Size = n

Isme n sorted elements hain.

Hume dono arrays ko merge karke final sorted array nums1 ke andar hi store karna hai.

Approach 1 : Brute Force

Sabse pehla idea jo mere mind me aaya, wo Two Pointer approach use karne ka tha.

Initially, dono pointers ko dono arrays ke beginning par rakhenge aur unki values compare karenge.

Teen possibilities hain.

Case 1 : val1 > val2

val2 ko val1 ki position par insert kar do.

Insert karne se pehle nums1 ke remaining elements ko ek position right shift kar do.

Uske baad dono pointers ko aage move kar do.

Case 2 : val1 < val2

val1 already apni correct position par hai.

Sirf first pointer ko aage move kar do.

Case 3 : val1 == val2

Same process follow karo jo Case 1 me kiya tha.

Ye process tab tak continue karo jab tak kisi ek array ke saare elements process na ho jayein.

Finally, dusre array ke remaining elements ko directly copy kar do.

Time Complexity : O(m × n)

Space Complexity : O(1)

Approach 2 : Better Solution

Time complexity ko improve karne ke liye size m + n ka ek naya array bana lenge.

Again, Two Pointer approach use karenge.

Case 1 : val1 > val2

val2 ko new array me insert kar do.

Second pointer ko aage move kar do.

Case 2 : val1 < val2

val1 ko new array me insert kar do.

First pointer ko aage move kar do.

Case 3 : val1 == val2

Dono me se kisi ek value ko new array me insert kar do.

Corresponding pointer ko aage move kar do.

Agar koi ek array completely process ho jaye, to dusre array ke remaining elements ko directly new array me copy kar do.

Finally, new array ko nums1 me copy kar do.

Time Complexity : O(m + n)

Space Complexity : O(m + n)

Approach 3 : Optimal Solution

Ek important observation ye hai ki nums1 me already saare elements store karne ke liye enough empty space available hai.

Isliye hume alag se new array banane ki zarurat nahi hai.

Agar hum beginning se fill karna start karenge, to kuch unprocessed elements overwrite ho sakte hain.

Is problem ko avoid karne ke liye hum array ko end se fill karenge.

Iske liye hum three pointers use karenge.

i = m - 1 → nums1 ka last valid element

j = n - 1 → nums2 ka last element

k = m + n - 1 → nums1 ki last position

Teen possibilities hain.

Case 1 : nums1[i] > nums2[j]

nums1[i] ko index k par place kar do.

i-- aur k-- move kar do.

Case 2 : nums1[i] < nums2[j]

nums2[j] ko index k par place kar do.

j-- aur k-- move kar do.

Case 3 : nums1[i] == nums2[j]

Dono me se kisi ek value ko index k par place kar do.

Corresponding pointer aur k ko move kar do.

Ye process tab tak continue karo jab tak kisi ek array ke saare elements process na ho jayein.

Agar nums2 pehle exhaust ho jaye, to nums1 ke remaining elements already apni correct position par honge.

Agar nums1 pehle exhaust ho jaye, to nums2 ke remaining elements ko nums1 me copy kar do.

Time Complexity : O(m + n)

Space Complexity : O(1)
