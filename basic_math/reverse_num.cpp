#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int sum=0;
    while(n){
        sum=sum*10+(n%10);
        n/=10;
    }
    return sum;
}
int main() {
   int n;
   cin>>n;
   cout<<reverse(n);

    return 0;
}
