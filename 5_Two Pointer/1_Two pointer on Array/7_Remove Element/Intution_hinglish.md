Problem ->

Is problem me hume ek array nums aur ek value val di gayi hai. Hume input array se val ki saari occurrences in place remove karni hain aur saare distinct elements ko array ke beginning me move karna hai.

End me hume total number of distinct elements return karna hai.

Note: Hume elements ka order preserve nahi karna hai.
---------------------------------------------------------------------
Intuition ->

Jab bhi kisi problem me bola jaye ki array se kisi element ko remove karna hai aur saare distinct elements ko beginning me place karna hai, to hume Two Pointers (In-Place) approach ke baare me sochna chahiye.

Chaliye do pointers lete hain:

i → Is pointer ka use hum array ko traverse karne ke liye karenge. (Initially 0)
j → Is pointer ka use hum next distinct element ko array me place karne ke liye karenge. (Initially 0)

Array ko traverse karte time do cases honge:

Case 1: Current element == val

Is case me hum sirf i pointer ko increment karke next element par move kar jayenge kyunki hume is element ko array ke beginning me place nahi karna hai.

Case 2: Current element != val

Is case me hume is element ko jth index par place karna hai kyunki ye ek distinct element hai. Element ko place karne ke baad j pointer ko 1 se increment kar denge.

Is process ko follow karne se saare distinct elements array ke beginning me place ho jayenge.

Number of Distinct Elements -> j 

-----------------------------------------------------------------------

Time Complexity -> O(N)

Space Complexity ->O(1)