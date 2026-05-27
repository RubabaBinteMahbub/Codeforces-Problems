#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
string s;
cin>>s;

s[0]=toupper(s[0]); 
  //Using loop is unnecessary.

cout<<s<<endl;
return 0;
}
