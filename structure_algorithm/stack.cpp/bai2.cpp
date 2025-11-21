#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    stack <char> a;
    for (auto x : s){
        a.push(x);
    }
    while (!a.empty()){
        cout << a.top();
        a.pop();
    }
    return 0;
}