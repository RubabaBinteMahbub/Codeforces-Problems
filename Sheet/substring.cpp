// sheet-4 (H)
// কোনো string শুধু "101" বা শুধু "010" দিয়ে তৈরি হলে Good নাহলে Bad প্রিন্ট করবে।

#include<bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin>>s;
  if(s.find("101") != string::npos || s.find("010") != string::npos){
    cout<<"Good"<<endl;
  }
  else{
    cout<<"Bad"<<endl;
  }
}

int main()
{
long long t;
cin>>t;

while(t--){
 solve();
}

return 0;
}
