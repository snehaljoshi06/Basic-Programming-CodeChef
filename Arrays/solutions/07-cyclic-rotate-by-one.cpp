#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;vector<long long>a(n);for(auto&x:a)cin>>x;if(n>1){long long last=a.back();for(int i=n-1;i>0;i--)a[i]=a[i-1];a[0]=last;}for(int i=0;i<n;i++)cout<<a[i]<<(i+1==n?'\n':' ');}