#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

string s;
cin>>s;

int i,count1=0,count2=0;

for(i=0;i<s.size();i++){
if(s[i]>='A' && s[i]<='Z') count1++;
}

for(i=0;i<s.size();i++){
if(s[i]>='a' && s[i]<='z') count2++;
}

if(count1>count2){
transform(s.begin(),s.end(),s.begin(),::toupper);
}
else if(count1==count2){
transform(s.begin(),s.end(),s.begin(),::tolower);
}
else{
transform(s.begin(),s.end(),s.begin(),::tolower);
}

cout<<s<<endl;

return 0;
}
