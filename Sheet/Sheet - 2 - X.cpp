#include<bits/stdc++.h>
using namespace std;

int main(){
long long t;
cin>>t;
while(t--){

long long n, cnt = 0,digit;
cin>>n;

while(n>0){
digit=n%2;
if(digit==1) cnt++;
n=n/2;
}

long long dec = pow(2, cnt)-1;

cout<<dec<<endl;
}

return 0;
}

/*
যদি Binary তে cnt সংখ্যক 1 থাকে, তাহলে
এই Binary number এর Decimal value হয়:
2^cnt -1 
*/
