#include<iostream>
#include<string>
#include<utility>
#include<algorithm>
using namespace std;
int main(){
int n,t,i;  cin>>n>>t;
string s; cin>>s;

while(t--){
	for(i=0;i<s.size();i++){
			if(s[i]=='B'&&s[i+1]=='G'){
			swap(s[i],s[i+1]);
			i++; 
//Skip next index after swapping.১ বার i++ বাড়িয়ে 1 করছে আবার for loop ১ বাড়িয়ে। current i 2 হয়ে যায়। তাই 0 1 কে আর চেক করে না। এবার 2 3 কে করে।
			}
	}
}

cout<<s<<endl;
return 0;
}
