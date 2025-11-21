#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set <int> v;
    while (n--){
        int a; cin >> a;
        v.insert(a);
    }
    for (auto i = v.begin(); i != v.end(); i++){
        cout << *i << " ";
    }
    return 0;
}