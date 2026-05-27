#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string S,t;
cin>>S>>t;
reverse(S.begin(),S.end());

//S reverse হয়ে গেছে।

if(S==t) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
