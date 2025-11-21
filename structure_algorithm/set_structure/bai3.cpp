#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int k; cin >> k;
    set <int> v;
    set <int> x;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        v.insert(a);
    }
    for (int i = 0; i < k; i++){
        int a; cin >> a;
        x.insert(a);
    }
    for (auto i = v.begin(); i != v.end(); i++){
        if (x.count(*i)) cout << *i << " ";
    }
    return 0;
}