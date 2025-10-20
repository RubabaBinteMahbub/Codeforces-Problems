#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  int n,count=0;
	cin>>n;
	string s;
	cin>>s;
  
	for(int i=0;i<s.size();i++){
	if(s[i]==s[i+1]) count++;
	}

  // Edge case : if n==0, count==0.
  
	cout<<count<<endl;
  return 0;
}
