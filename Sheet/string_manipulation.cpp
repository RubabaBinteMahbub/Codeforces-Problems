// manipulation -> different operations of string

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

void LemonTea(){
long long n, q;
cin>>n>>q;

string s;
cin>>s;

while(q--){
string cmd;
cin>>cmd;

 if(cmd=="substr"){
    long long l, r;
    cin>>l>>r;
    cout<<s.substr(l-1, r-l+1)<<endl;
 }
else if(cmd=="sort"){
    long long l, r;
    cin>>l>>r;
    sort(s.begin()+l-1, s.begin()+r);
 }
else if(cmd=="pop_back"){
    s.pop_back();
 }
else if(cmd=="back"){
    cout<<s.back()<<endl;
 }
else if(cmd=="reverse"){
    long long l, r;
    cin>>l>>r;
    reverse(s.begin()+l-1, s.begin()+r);
 }
else if(cmd=="front"){
    cout<<s.front()<<endl;
 }
else if(cmd=="push_back"){
    char x;
    cin>>x;
    s.push_back(x);
 }
else if(cmd=="print"){
    long long pos;
    cin>>pos;
    cout<<s[pos-1]<<endl;
 }
}
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(NULL);

long long t;
cin>>t;

while(t--){
  LemonTea();
}

return 0;
}
