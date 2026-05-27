#include<iostream>
using namespace std;
int main()
{
		int n,X=0;
	  cin>>n;

		while(n--){

 	  string s;
	  cin>>s; 	
		
 		if(s[1]=='+') X++;
		else if(s[1]=='-') X--;

		}
		cout<<X<<endl;

		return 0;
}
