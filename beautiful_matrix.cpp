#include<iostream>
using namespace std;
int main()
{
		int a[5][5],i,j,swap_num;
		for(i=0;i<5;i++){
						for(j=0;j<5;j++){
						cin>>a[i][j];
						if(a[i][j]==1){
						swap_num=abs(i-2)+abs(j-2);
						}
						}
 		}
		
		cout<<swap_num<<endl;
		return 0;
}
