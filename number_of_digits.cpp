#include <bits/stdc++.h>
using namespace std;
int digit_counting(int n){
    int count = 0;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<count<<endl;
    return 0;
}

int main() {
    int x;
    cin>>x;
    digit_counting(x);
    return 0;
}
