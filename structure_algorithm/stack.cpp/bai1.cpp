#include <bits/stdc++.h>        
using namespace std;
bool valid(string s){
    stack <char> st;
    for (auto x : s){
        if (x == '(' || x == '{' || x == '['){
            st.push(x);
        }
        else{
            if (st.empty()) return false;
            else{
                char top = st.top();
                st.pop();
                if (x == ')' && top != '(' ||
                    x == '}' && top != '{' ||
                    x == ']' && top != '[') return false;
            }
        }

    }
    return st.empty();
}
int main(){
    string s; cin >> s;
    cout << (valid(s) ? "yes" : "no");
    return 0;
}