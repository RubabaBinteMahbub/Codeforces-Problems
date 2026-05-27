#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,cnt;
cin>>a;

string s=to_string(a);

for(char c : s){
if(c=='4' || c=='7') cnt++;
}

string t = to_string(cnt);

// Unknown khujchi paini. Plan successful. Enemy not found. Print yes.
if(t.find_first_not_of("47")==string :: npos) cout<<"YES\n";
else cout<<"NO\n";

return 0;
}
