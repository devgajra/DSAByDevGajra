Approach 1

Problem: Hume ek integer array diya gaya hai, aur hume ek aisa array return karna hai jisme starting me saare even integers ho aur unke baad saare odd integers ho.

Intuition

Kyuki hume ek naya array return karna hai, to sabse pehle hum input array ke equal length ka ek ans array bana lete hain.

Ab hum input array ko traverse karenge. Har integer ke liye sirf do possibilities hain:

Integer even hai.
Integer odd hai.

Agar integer even hai, to hum usse ans array me front side se place kar denge.

Agar integer odd hai, to hum usse ans array me back side se place kar denge.

Ab ye track karne ke liye ki next even aur odd number kis position par jayega, hum do pointers use karenge.

i → Ye us position ko track karega jahan next even integer ko place karna hai. Jab bhi koi even integer yahan place hoga, hum i ko increment kar denge.
j → Ye us position ko track karega jahan next odd integer ko place karna hai. Jab bhi koi odd integer yahan place hoga, hum j ko decrement kar denge.

Is process ko follow karte hue ans array me pehle saare even integers aur uske baad saare odd integers aa jayenge.

Time Complexity: O(n)

Space Complexity: O(n)

Approach 2 (Optimized)

Pehle approach me hum extra space use kar rahe the. Kya hum ise optimize kar sakte hain aur given array ko hi update karke space complexity ko O(1) bana sakte hain?

Kyuki hume even integers ko starting me aur odd integers ko end me rakhna hai, isliye hum fir se two pointers use karenge.

i → Ye us position ko point karega jahan even integer hona chahiye. Initially i = 0.
j → Ye us position ko point karega jahan odd integer hona chahiye. Initially j = n - 1.

Ab i pointer par jo value hai, uske liye do possibilities hain.

Case 1: Value even hai

Is case me hume kuch nahi karna, kyuki value already apni correct position par hai. Bas i ko increment kar denge.

Case 2: Value odd hai

Is case me hum i aur j wali values ko swap kar denge aur j ko decrement kar denge.

Lekin yahan hum i ko increment nahi karenge, kyuki hume nahi pata ki j se jo value swap hokar aayi hai wo even hai ya odd. Isliye us value ko dobara check karna zaroori hai.

Hum is process ko tab tak repeat karenge jab tak i pointer j ko cross nahi kar leta.

Us time tak array is tarah rearrange ho chuka hoga ki starting me saare even integers honge aur unke baad saare odd integers.

Time Complexity: O(n)

Space Complexity: O(1)