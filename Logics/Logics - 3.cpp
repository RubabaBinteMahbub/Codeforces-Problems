1) c-'0' দিয়ে character কে integer এ কনভার্ট করা হয়।

//কোনো স্ট্রিং এর digit গুলোর যোগফল
int sum = 0;
for(char c : s){
    if(isdigit(c)){
        sum += c - '0';
    }
}
cout << sum;

2) Fast I/O full setup
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        // solve here
    }
}

3) endl থেকে \n faster।
