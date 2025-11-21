#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> num = {1, 2, 3};
    vector <int> permutation;
    for (int x : num){
        permutation.push_back(x);
    }
    do{
        for (int a : permutation){
            cout << a << " ";
        }
        cout << "\n";
    }while(next_permutation(permutation.begin(), permutation.end()));
    return 0;
}