// Sheet 3 I

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void LemonJuice(){
ll n;
cin>>n;

ll a[n];
for(ll i=0; i<n; i++){
cin>>a[i];
}

ll minn=LLONG_MAX, current_minn;
for(int i=0; i<n-1; i++){
  for(int j=i+1; j<n; j++){
      current_minn = a[i]+a[j]+j-i;
      if(current_minn<minn){
					minn=current_minn;
      }
   }
}

cout<<minn<<endl;

}

int main()
{
ios::sync_with_stdio(false);
cin.tie(NULL);

ll t;
cin>>t;

while(t--){
  LemonJuice();
}

return 0;
}
