#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;if(n<=0)return 0;vector<long long>a(n);for(auto&x:a)cin>>x;long long mn,mx;int i;if(n%2){mn=mx=a[0];i=1;}else{mn=min(a[0],a[1]);mx=max(a[0],a[1]);i=2;}for(;i+1<n;i+=2){long long lo=min(a[i],a[i+1]),hi=max(a[i],a[i+1]);mn=min(mn,lo);mx=max(mx,hi);}cout<<"Minimum: "<<mn<<"\nMaximum: "<<mx<<'\n';}