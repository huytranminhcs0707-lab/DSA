#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map <string, string> v;
    while (n--){
        string a, b; cin >> a >> b;
        v[a] = b;
    }
    int q; cin >> q;
    while (q--){
        string s; cin >> s;
        if (v.count(s)) cout << v[s];
        else cout << "NOT FOUND";
    }
    return 0;
}