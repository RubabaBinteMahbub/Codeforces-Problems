#include<iostream>
using namespace std;
int main()
{
int x,min_step;
cin>>x;

min_step= x/5 ;

if(x%5!=0){
min_step++;
}

cout<<min_step<<endl;

return 0;
}
