#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
  if (a.size() != b.size()) return a.size() < b.size();
  else return a < b;
}
int main(){
  int a[10] ={1, 2, 5, 6, 7, 8, 9, 11, 15, 16};
  int target = 15;
  int k = 0;
  int b;
  for ( b = 10 / 2; b>=1; b /= 2){
    while (k+b < 10 && a[k+b] <= target){ k+=b;}
    
  }
  cout << k+b;
  
  return 0;
}