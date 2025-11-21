#include <iostream>
using namespace std;
// Tron hai day (l, m) (m+1,r)
int merge(int a[], int l, int m, int r){
    vector <int> x(a+l, a+m+1);
    vector <int> y(a+m+1, a+r+1);
    int i = 0; int j = 0;
    int count = 0;
    while (i < x.size() && j < y.size()){
        if (x[i] <= y[j]){
            a[l] = x[i];
            i++;
            l++;
        }
        else{
            a[l] = y[j];
            count += x.size() - i;
            j++;
            l++;
        }
    }
    while (i < x.size()){
        a[l] = x[i];
        i++;
        l++;
    }
       while (j < y.size()){
        a[l] = y[j];
        j++;
        l++;
    }
    return count;
}
int mergeSort(int a[], int l, int r){
    // if (l >= r) return;
    // int m = (l+r)/2;
    // mergeSort(a, l , m);
    // mergeSort(a, m+1, r);
    // merge(a, l, m,  r);
    int cnt = 0;
    if (l < r){
        int m = (l+r)/2;
        cnt += mergeSort(a, l, m);
        cnt += mergeSort(a, m+1, r);
        cnt += merge(a , l , m, r);
    }
    return cnt;
}
int main(){
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++ ){
       cin >> a[i];
    }
    int dem = 0;
    for (int i = 0; i < n; i ++){
        for (int j = i+1; j < n; j++ ){
            if (a[i] > a[j]) dem ++;
        }
    }
    cout << dem << " " << mergeSort(a, 0, n-1);
    return 0;
}