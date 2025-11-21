#include <bits/stdc++.h>
using namespace std;
vector <int> nums {1,2,3};

int n = 3;

int main(){
    for (int i = 0; i < 1<<n ; i++){
        vector <int> subset;
        for (int j = 0; j < n; j++){
            if (i & 1 << j) subset.push_back(nums[j]);
        }
        cout << "{";
        for (auto x : subset){
            cout << x << " ";
        }
        cout << "}" << " ";
    }
    return 0;
}