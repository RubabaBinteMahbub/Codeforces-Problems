#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    while (s.find("EGYPT") != string::npos) {
        s.replace(s.find("EGYPT"), 5, " ");
    }

    cout << s << '\n';

    return 0;
}

/*
s.find("EGYPT")
যদি substring পাওয়া যায়, তাহলে তার starting index return করে।

string s = "ABCDEGYPTXYZ";
cout << s.find("EGYPT");
output : 5

যদি না পাওয়া যায়
s.find("EGYPT") == string::npos
সেটা true হবে।

তাই সাধারণত,
while (s.find("EGYPT") != string::npos) {
    s.replace(s.find("EGYPT"), 5, " ");
}
এভাবে বারবার সব "EGYPT" কে space দিয়ে replace করা হয়।
*/
