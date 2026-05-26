#include<bits/stdc++.h>
using namespace std;

void solve(){
string s;
getline(cin, s);

map<char, int>mp;

for(long long i=0; i<s.size(); i++){
if(s[i]>='A' && s[i]<='Z') s[i]+=32;
mp[s[i]]++;
}

for(auto x : mp){
cout<<x.first<<" : "<<x.second<<endl;
}
}

int main()
{
long long t;
cin>>t;
cin.ignore();

while(t--){
solve();
}

return 0;
}
