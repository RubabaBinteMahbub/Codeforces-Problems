✳️ Next Round 
k তম a[k-1] এ থাকে। যেমন n তম থাকে a[n-1] এ বা 5 তম a[4] এ।
✳️ Boy or Girl
user name এর স্ট্রিং sort করলে একই letter ২ বার থাকলে পাশাপাশি চলে আসে।
তাই পাশের index এর letter একই কিনা তা তুলনা করে। a[i] != a[i+1] হলে 
count++ করে।
✳️ 1k+2k+3k+....+wk
= k(1+2+3+....+k)
= k. w(w+1)/2
✳️ Bit++
gets() cannot be used in C++. Use 
getline(cin, s) ;
reads the whole line including spaces. If you want to	read only a single word without spaces use cin>>s ; 
X++
++X
X--
--X.
s[1] is easy common part to compare.
✳️ Beautiful Matrix
5*5 একটা ম্যাট্রিক্স আছে। 25 টা সংখ্যার মধ্যে 24 টা 0, 1টা 1। জানতে চেয়েছে 1 টা কে center position এ নিতে কতবার 0 আর 1 swap করতে হবে।
-3 না করে -2 করব কারণ অ্যারে 0 থেকে শুরু হয়।
-2 as center position is (2,2).

✳️ Domino Piling
১টা ডমিনো ২টা ঘর।
বোর্ডের ক্ষেত্রফল(M*N)/ডমিনোর ক্ষেত্রফল(দৈর্ঘ*প্রস্থ=2*1)।
Test case 2 তে (3*3)/2=4.5 হলেও ans. 4 ই আসবে কারণ 2 টা int type number এর ভাগফল।

✳️ Patya and Strings
বলেছে  uppercase, lowercase একই বিবেচিত হবে। এটা যে একই সেটা আমরা বুঝব কিন্তু  Compiler তো বুঝবে না। তাই আগে আসলেই ২টা কে সমান করে ফেলবো toupper() বা tolower() দিয়ে।
আর স্ট্রিং কোনটা বড় সেটা বুঝবো last letter দিয়ে। সামনেরগুলো count হবেনা।
s1 এর শেষ letter s , s2 এর শেষ letter z হলে s2 বড় কারণ s এর থেকে z বড়।

✳️ Bear and big brother. 
while(a>b)→ this means the loop runs only while a is already bigger than b which is opposite of what we want.The loop should run while a is still less than b is while(a<=b).Like in rev. number,the loop runs while the number is still not equal to zero.
