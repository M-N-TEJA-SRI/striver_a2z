#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void divisors(int n,vector<int>&v){
    int i;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(n/i!=i)
            v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
}
int main() {
  int n;
  cin>>n;
  vector<int>v;
  divisors(n,v);
  for(auto it:v){
      cout<<it<<" ";
  }
    return 0;
}
