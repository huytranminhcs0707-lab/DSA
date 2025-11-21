#include <bits/stdc++.h>
using namespace std;
vector <int> nums {1,2,3};
vector <int> subset;
int n = 3;
void generate_subset(int k){
    if (k == n){
        cout << "{";
        for (int i = 0; i < subset.size(); i++){
            if (i == subset.size()-1) cout << subset[i]; 
            else cout << subset[i] << " ";
        }
        cout << "}\n";
        return;
    }
    generate_subset(k+1);
    subset.push_back(nums[k]);
    generate_subset(k+1);
    subset.pop_back();
}
int main(){
    generate_subset(0);
    return 0;
}