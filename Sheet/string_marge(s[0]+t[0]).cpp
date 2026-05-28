// Sheet 4 k

#include<bits/stdc++.h>
using namespace std;

void LemonTea(){
string s, t;
cin>>s>>t;

string a;
int i=0, j=0;

// একটা স্ট্রিং পরো শেষ হয়ে যাওয়া পর্যন্ত চলবে
while(i<s.size() && j<t.size()){
cout<<s[i]<<t[i];
i++;
j++;
}

// loop শেষ হয়ে যাওয়ার পর যেটার charecter বাকি থেকে যাবে সেটার জন্য। বাকি পথ যাওয়ার জন্য
while(i<s.size()){
cout<<s[i]; // i এর current value থেকে শুরু হবে।
i++;
}

while(j<t.size()){
cout<<t[j];
j++;
}

cout<<endl;
}

int main()
{
long long t;
cin>>t;

while(t--){
LemonTea();
}

return 0;
}
