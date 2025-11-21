#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int left, right;
    cin >> left >> right;
    vector <long long> a(n);
    vector <long long> L, R;
    for (int i = 0; i < n; i ++){
        cin >> a[i];
    }
    int mid = n/2;
    for (long long i = 0; i < (1LL << mid); i++){
        long long sum = 0;
        for (int j = 0; j < mid; j++){
            if (i & (1LL << j)){
                sum+=a[j];
            }
        }       
        L.push_back(sum);
    }
    // 5 2 3
    for (long long i = 0; i < 1LL << (n-mid); i++){
        long long sum = 0;
        for (int j = 0; j < (n-mid); j++){
            if (i & (1LL << j)){
                sum+=a[mid+j];
            }
        }
        R.push_back(sum);
    }
    sort(R.begin(), R.end());
    long long count = 0;
    
    for (long long x : L){
        long long low = left - x;
        long long high = right - x;
        count += upper_bound(R.begin(), R.end(), high) - lower_bound(R.begin(), R.end(), low);
    }
    cout << count;
    //3334

    return 0;
}