#include<bits/stdc++.h>
using namespace std;
void divisor(int n){
  vector <int> small, large;
  for(int i = 1;i<=sqrt(n);i++){
    if(n%i==0){
      small.emplace_back(i);
      if(i!=n/i){
        large.emplace_back(n/i);
      }
    }
  }
  for(int x: small)
  cout<<x<<" ";
  reverse(large.begin(), large.end());
  for(int x: large)
  cout<<x<<" ";
}
int main(){
  int n;
  cin>>n;
  divisor(n);
  return 0;
}
  


