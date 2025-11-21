#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    unordered_set <int> v;
    while (n--){
        int a; cin >> a;
        v.insert(a);
    }
    int q; cin >> q;
    while (q--){
        int b; cin >> b;
        if (v.count(b)) cout << "YES";
        else cout << "NO";
    }
    return 0;
}