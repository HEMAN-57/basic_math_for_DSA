#include <bits/stdc++.h>
using namespace std;
void reverse(int x){
    int rev = 0;
    while(x!=0){
        int rem = x%10;
        x = x/10;
        rev = rev*10+rem;
    }
    cout<<rev<<endl;
}
int main(){
    int n;
    cin>>n;
    reverse(n);
    return 0;
}
