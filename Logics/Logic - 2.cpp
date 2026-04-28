🟩
#include<bits/stdc++.h>
using namespace std;
int main(){

return 0;
}
অনেকগুলো testcase pass হয়ে ১ টাতে wa খেলে আগে submissions এ দেখতে হবে কোন testcase এর জন্য wa খেয়েছো।
🟩
#include<bits/stdc++.h>
using namespace std;
int main(){

return 0;
}
🟩
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    bool found = false;

    for(int i = a; i <= b; i++){
        string s = to_string(i);

        if(s.find_first_not_of("47") == string::npos){
            cout << i << " ";
            found = true;
        }
    }

    if(!found) cout << -1;

    return 0;
}
🟩
#include<bits/stdc++.h>
using namespace std;
int main(){
int a, b;
cin>>a>>b;

bool found=false;

for(int i=a; i<=b; i++){
string s=to_string(i);

if(s.find_first_not_of("47")==string :: npos){
cout<<i<<" "; //Enemy not found. Thus, it's lucky number.
found=true;
}
}

if(!found) cout<<"-1\n";
return 0;
}
