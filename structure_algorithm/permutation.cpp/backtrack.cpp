#include <bits/stdc++.h>
using namespace std;
vector <int> nums {1,2,3};
bool used[3] = {false, false, false};
vector <int> current;
int n = 3;
void backtrack(){
   if (current.size() == n){
    cout << "{";
    for (auto x : current) cout << x;
    cout << "}";
    return;
   }
   else{
    for (int i = 0; i < 3; i++){
        if (used[i] == false){
            used[i] = true;
            current.push_back(nums[i]);
            backtrack();
            used[i] = false;
            current.pop_back();
        }
    }
   }
}
int main(){
   backtrack();
    return 0;
}