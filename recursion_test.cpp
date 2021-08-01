#include <bits/stdc++.h>
typedef long long ll;
#define endl '\n'

using namespace std;

set <string> st;

void r(char ch, string str) {
     if(ch > 'j') {
          return;
     }
     st.insert(str + ch);
     st.insert(ch + str);
     char next = ch + 1;
     r(next, str + ch);
     r(next, ch + str);
}

int main() {

    string s = "";
    char ch = 'a';
    r(ch, s);
    for(auto it: st) {
          cout << it << " ";
    }
    cout << "\n";
}