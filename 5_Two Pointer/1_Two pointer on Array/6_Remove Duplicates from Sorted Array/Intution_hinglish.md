Problem

Is problem mein hume ek array diya gaya hai. Ye array sorted hai non-decreasing order mein aur isme duplicate numbers bhi present hain.

Hume existing array se duplicate elements ko remove karna hai aur input array mein total distinct elements ki count return karni hai.

Intuition

Is problem ko hum Two Pointers approach se solve kar sakte hain. Main do pointers use karunga.

j → Ye us location ko represent karta hai jahan last distinct number placed hai. (Initially j = 0)
i → Ye current processing element ka index hai.

Main array ke saare elements ko process karunga by varying i from 1 to n - 1. Har baar jab hume ek naya distinct element milega, us number ko j + 1 index par place kar denge.

Pura array process hone ke baad, j last distinct element ki position par point karega.

No. of distinct elements → j + 1

Time Complexity: O(N)

Space Complexity: O(1)