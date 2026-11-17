#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int n;cin>>n;vector<long long>a(n);for(auto&x:a)cin>>x;if(n<=1){cout<<0<<'\n';return 0;}if(a[0]==0){cout<<-1<<'\n';return 0;}long long reach=a[0],steps=a[0],jumps=1;for(int i=1;i<n;i++){if(i==n-1){cout<<jumps<<'\n';return 0;}reach=max(reach,(long long)i+a[i]);steps--;if(steps==0){jumps++;if(i>=reach){cout<<-1<<'\n';return 0;}steps=reach-i;}}cout<<-1<<'\n';}