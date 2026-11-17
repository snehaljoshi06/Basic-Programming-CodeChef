#include <iostream>
#include <vector>
using namespace std;
// Input: N, followed by N+1 integers in the range [1, N].
int main(){int n;cin>>n;vector<int>a(n+1);for(int&x:a)cin>>x;int slow=a[0],fast=a[0];do{slow=a[slow];fast=a[a[fast]];}while(slow!=fast);slow=a[0];while(slow!=fast){slow=a[slow];fast=a[fast];}cout<<slow<<'\n';}