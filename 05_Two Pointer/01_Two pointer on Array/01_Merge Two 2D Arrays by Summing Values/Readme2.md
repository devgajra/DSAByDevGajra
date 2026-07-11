Intuition

Hume do 2D arrays diye gaye hain jinka size alag ho sakta hai, aur hume unhe merge karna hai.

Merge karte time hume 4 baaton ka dhyan rakhna hai:

1. Final merged array me koi bhi index repeat nahi hona chahiye.
2. Final merged array index ke ascending order me sorted hona chahiye.
3. Agar same index dono input arrays me present hai, to final array me us index ki value dono values ka sum hogi.
4. Agar koi index sirf ek array me present hai, to us element ko waise hi final array me add kar denge.

Ab kyunki dono arrays pehle se hi index ke ascending order me sorted hain, isliye main dono arrays ko ek saath traverse karunga.

Har step par:
- Dono arrays ke current elements ko compare karunga.
- Jis element ka index chhota hoga, usse final array me add karunga aur usi array ka pointer aage badha dunga.
- Agar dono arrays ka index same hua, to final array me ek naya element add karunga jisme same index hoga aur value = value1 + value2 hogi. Uske baad dono pointers ko aage move kar dunga.

Is process ko follow karte hue ho sakta hai ki ek array pehle complete traverse ho jaye aur doosre array me kuch elements abhi bhi bache ho.

Us case me, remaining array ke saare elements final array me add kar denge.

Kyunki hum hamesha elements ko ascending order of index me add kar rahe hain, isliye final merged array bhi ascending order me sorted rahega.

Time Complexity

O(m + n)

n = size of first array
m = size of second array

Space Complexity

O(1)

Code

See solution.cpp.

Problem Link

https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/