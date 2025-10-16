#include<iostream>
using namespace std;
int main()
{
		int k,n,w,total_cost,borrowed;
		cin>>k>>n>>w;

		total_cost=(k*(w*(w+1)))/2;

	  if(total_cost>n){
 		borrowed=total_cost-n;
 	  cout<<borrowed<<endl;
		}
	  else {
		cout<<"0"<<endl;
		}

return 0;
}
