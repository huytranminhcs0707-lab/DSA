#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    map <char, int> count;
    for (char i : s){
        count[i]++;
    }
    for (auto x : count){
        cout << x.first << " " << x.second;
        cout << "\n";
    }
    return 0;
}