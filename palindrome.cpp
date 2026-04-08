#include <bits/stdc++.h>
using namespace std;
void palindrome(int x){
    int rev = 0;
    int temp = x;
    while(x!=0){
        int rem = x%10;
        x = x/10;
        rev = rev*10+rem;
    }
    if(temp == rev){
        cout<<temp<<" "<<"is a palindrome number."<<endl;
    }
    else{
        cout<<temp<<" "<<"is not a palindrome number."<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    palindrome(n);
    return 0;
	

}
