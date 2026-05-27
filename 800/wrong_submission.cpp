#include<iostream>
using namespace std;
int main(){
int n,k,last_digit,sub;
cin>>n>>k;
  
while(k--){
last_digit=n%10;
if(last_digit!=0) n=n-1;
else n=n/10;
}
  
cout<<n<<endl;
return 0;
}
