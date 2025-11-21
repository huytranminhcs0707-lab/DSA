#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map <int, int> v;
    while (n--){
        int a; cin >> a;
        v[a]++;
    }
    for (auto x : v){
        cout << x.first << " " << x.second;
        cout << "\n";
    }
    return 0;
}