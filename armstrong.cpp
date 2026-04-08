#include <bits/stdc++.h>
using namespace std;
void armstrong(int num){
    int temp = num;
    int count = 0;
    while(temp!=0){
        
        temp = temp/10;
        count++;
    }
    int sum = 0;
    int n = num;
    
    while(n!=0){
        int ld = n%10;
        sum+=pow(ld, count);
        n = n/10;
    }
    if(sum == num){
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    armstrong(n);
    return 0;
	

}
