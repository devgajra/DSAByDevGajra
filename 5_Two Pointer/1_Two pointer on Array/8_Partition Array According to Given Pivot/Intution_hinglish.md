Problem ->

Is problem me hume ek array aur ek pivot value di gayi hai. Hume array ko is tarah rearrange karna hai ki pivot se chhoti saari values pivot se pehle aayein, aur pivot se badi saari values pivot ke baad aayein. Lekin pivot se pehle aur pivot ke baad wale elements ki relative order maintain rehni chahiye.

Intuition ->

Apni past learning se maine ye seekha hai ki jab bhi hum kisi array ko rearrange karke modify karte hain, tab O(n) solution me in-place relative order maintain karna kaafi difficult hota hai.

To chaliye O(n) solution ke baare me sochte hain by creating ek extra array ans of the same size, along with do pointers i aur j.

Sabse pehle hum input array ko traverse karenge aur saare elements jo pivot se chhote hain unhe ans array ke beginning me place karenge.

Har baar jab hume pivot se chhota element milega, hum usse ith index par place karenge aur i ko 1 se increment kar denge (initially i = 0).

Is process ko follow karne se hum pivot se chhote saare elements ki relative order maintain karte hain, aur i hamesha last processed element ke baad wali next available position par point karega.

Next, hum input array ko end se traverse karenge aur saare elements jo pivot se bade hain unhe ans array ke end me place karenge.

Har baar jab hume pivot se bada element milega, hum usse jth index par place karenge aur j ko 1 se decrement kar denge (initially j = n - 1).

Is process ko follow karne se hum pivot se bade saare elements ko end se arrange kar dete hain while maintaining unki relative order.

Finally, jo bhi remaining positions bachti hain unhe pivot elements se fill kar denge.

Time Complexity -> O(3N)

Space Complexity -> O(N)

Ye ek three-pass solution hai. Isse hum two-pass solution me improve kar sakte hain.
---------------------------------------------------------------------

Optimal Approach

Input array ko traverse karke calculate karo:

count1 → Pivot se chhote elements ki total count.
count2 → Pivot ke equal elements ki total count.

Ab teen pointers lo:

i → Pivot se chhote elements ko store karega (initially 0).
j → Pivot ke equal elements ko store karega (initially count1).
k → Pivot se bade elements ko store karega (initially count1 + count2).

Ab input array ko dobara traverse karo aur har element ko uski correct position par place karo while corresponding pointer ko increment karte jao.

Ye approach bhi relative order maintain karti hai kyunki elements ko unki correct position par exactly usi order me place kiya ja raha hai jis order me wo input array me encounter hote hain.

Time Complexity -> O(2N)

Space Complexity -> O(N)