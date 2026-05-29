// sheet 3 K
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define  ll long long

void LemonTea(){
ll n;
cin>>n;

string s;
cin>>s;

ll sum=0;
for(char ch : s){
  sum += ch - '0';
}
cout<<sum<<endl;
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(NULL);

// ll t;
// cin>>t;

//while(t--){
    LemonTea();
//}

return 0;
}
