#include<iostream>
using namespace std;
int main(){
long long n,digit,count=0;
  //Always use ll when you should take an integer.Safe.
  //as int can overflow when a very long number is taken.
  //You can use string also as it doesn't overflow.
cin>>n;

while(n!=0){
digit=n%10;
if(digit==4 || digit==7) count++;
n/=10;
}

if(count==4 || count==7) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}
