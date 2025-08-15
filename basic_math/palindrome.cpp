#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n){
    int sum=0,temp=n;
    while(n){
        sum=sum*10+(n%10);
        n/=10;
    }
    return sum==temp;
}
int main() {
   int n;
   cin>>n;
   cout<<palindrome(n);

    return 0;
}
