#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool armstrong(int a){
    int sum=0,temp=a,length=log10(a)+1;
    while(a){
        sum+=pow(a%10,length);
        a/=10;
    }
    return temp==sum;
}
int main() {
   int a;
   cin>>a;
   cout<<armstrong(a);

    return 0;
}
