#include<bits/stdc++.h>
using namespace std;

int main(){
long long t;
cin>>t;
while(t--){

long long x, y, minn, maxx, sum=0;
cin>>x>>y;

minn = min(x,y);
maxx = max(x,y);

for(int i=minn+1; i<=maxx-1; i++){
if(i%2 != 0) sum+=i;
}

cout<<sum<<endl;

}

return 0;
}
