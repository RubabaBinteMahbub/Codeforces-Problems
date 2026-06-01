// sheet 4 v
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void LemonTea(){
string s;
cin>>s;

for(int i=0; i<s.size(); i++){
if(i+4<s.size() && s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T'){
cout<<' ';
i+=4;
}
else
cout<<s[i];
}
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(NULL);

//long long t;
//cin>>t;

//while(t--){
  LemonTea();
//}

return 0;
}
