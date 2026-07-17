Problem ->

Hume ek array diya gaya hai jiska length n hai aur usme equal number of positive aur negative integers hain.

Hume array ko is tarah rearrange karna hai ki positive aur negative numbers alternate (consecutive pairs) me aayein, saath hi positive elements ka relative order aur negative elements ka relative order preserve bhi rehna chahiye.

Intuition ->

Ye problem kaafi similar hai Sort Array By Parity II se, jahan hum even numbers ko even indices par aur odd numbers ko odd indices par place karte the.

Dono problems me hum array ko bas ek condition ke basis par do groups me divide kar rahe hain. Apni previous learning ke according, sabse pehle two-pointer approach hi dimaag me aati hai.

Lekin is problem me ek extra constraint hai: positive aur negative elements ka relative order preserve hona chahiye. Is condition ko single traversal ke saath in-place solution se satisfy karna possible nahi hai.

Isliye, space complexity sacrifice karke time complexity ko optimize karte hue, maine ye approach sochi.

Approach ->

Sabse pehle length n ka ek answer array bana lete hain.

Ab do pointers lete hain:

i → us index ko point karega jahan next positive number place hoga.
j → us index ko point karega jahan next negative number place hoga.

Initialize karte hain:

i = 0
j = 1

Ab input array ko sirf ek baar traverse karte hain.

Har element ke liye:

Agar value positive hai, to use answer array ke index i par place karo aur i ko 2 se increment kar do.
Agar value negative hai, to use answer array ke index j par place karo aur j ko 2 se increment kar do.

Is process ko poore array par follow karne ke baad hume required arrangement mil jaata hai, aur positive aur negative dono elements ka relative order bhi preserve rehta hai.



Complexity Analysis ->

Time Complexity: O(N)
Space Complexity: O(N)