#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int target; cin >> target;
    vector <int> a(n);
    for (int i = 0; i < a.size(); i++){
        cin >> a[i];
    }
    // 5
    int mid = n/2; 
    vector <int> L;
    vector <int> R;
    for (int i = 0; i < (1 << mid); i++){
        // 0 1 2 3
        // 00 01 10 11
         int sum = 0;
        for (int j = 0; j < mid; j++){
            //0 1 
            //2 3
            if (i & (1 << j)){
                sum += a[j];
            }

        }
        L.push_back(sum);
    }
    for (int i = 0; i < (1 << (n-mid)); i ++){
        // 0 -> 2^n-mid +-1
        int sum = 0;
        for (int j = 0; j < n-mid; j++){
            if (i & (1 << j)){
                sum += a[mid+j];
            }

        }
        R.push_back(sum);
    }
    sort(R.begin(), R.end());
    for (int i = 0; i < L.size(); i++){
        long long need = target - L[i];
        if (binary_search(R.begin(), R.end(), need)){
                cout << "YES";
                return 0;
            }
  
        
    }
    cout << "NO";
    return 0;
}