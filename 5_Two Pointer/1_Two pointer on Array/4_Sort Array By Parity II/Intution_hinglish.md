INTUITION ->

Problem ->

Is problem me hume size n ka ek array diya gaya hai, aur is array me exactly half even aur half odd values hain. Hume even values ko even indices par aur odd values ko odd indices par place karna hai.

Socho, ye pichle problem me jo learning ki thi usi ka ek application hai.

Learning ->

Jab bhi hume kisi condition ke basis par array ko alag-alag groups me divide karna hota hai, tab hum two-pointer approach ke baare me soch sakte hain.

Here ->

Yaha hume array ko do groups me divide karna hai:

Group of even integers
Group of odd integers

Condition jis basis par divide karna hai ->

Odd values odd indices par honi chahiye.
Even values even indices par honi chahiye.

Iske liye hum do pointers use karte hain: i aur j.

i -> batata hai ki next even value kis index par place honi chahiye.
j -> batata hai ki next odd value kis index par place honi chahiye.

Main is tarah soch raha hu kyunki array me half even aur half odd integers hain. Agar hum kisi tarah saari even values ko unke correct even indices par place kar dein, to hamara problem solve ho jayega.

Main i pointer ko index 0 se start karta hu. Ab main us index ki corresponding value check karta hu. Yaha do possibilities hain.

Case 1: val even hai

Is case me value already apni correct position par hai. Isliye main i pointer ko 2 se increment karke next even index par move kar deta hu.

Case 2: val odd hai

Is case me ye odd value apni correct position par nahi hai. Isliye main is value ko uski correct position, yani jth index, par ith aur jth indices ki values ko swap karke place kar deta hu.

Uske baad j pointer ko 2 se increment karke next odd index par move kar deta hu.

Lekin main i pointer ko move nahi kar sakta kyunki swap ke baad mujhe nahi pata ki ith index par jo nayi value aayi hai, wo even hai ya odd. Isliye us value ko dobara check karna zaroori hai.

Is process ko follow karte hue ek point aayega jab ya to i ya j array ke bahar chala jayega. Usi point par hume process stop kar dena hai, kyunki ye tabhi possible hai jab ya to saari even values even indices par aa chuki hongi ya saari odd values odd indices par aa chuki hongi.

Time Complexity -> O(n)

Space Complexity -> O(1)