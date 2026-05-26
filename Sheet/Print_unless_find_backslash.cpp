#include<bits/stdc++.h>
using namespace std;

void solve(){
string s;
getline(cin, s);

long long i=0;
while(s[i] != '\\'){  // কারণ শুধু \ দিলে compiler কনফিউজড হয়ে যায়।
cout<<s[i];
i++;
}
}

int main()
{
//long long t;
//cin>>t;

//while(t--){
solve();
//}
}
