#include<iostream>
#include<string>
using namespace std;
int main(){
long long n,count1=0,count2=0;
cin>>n;
string S;
cin>>S;
for(int i=0;i<S.size();i++){
if(S[i]=='A') count1++;
else if(S[i]=='D') count2++;
}

if(count1>count2) cout<<"Anton"<<endl;
else if(count2>count1) cout<<"Danik"<<endl;
else cout<<"Friendship"<<endl;

return 0;
}
