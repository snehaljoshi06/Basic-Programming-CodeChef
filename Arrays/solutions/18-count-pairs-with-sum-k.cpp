#include <iostream>
#include <unordered_map>
using namespace std;
int main(){int n;long long k;cin>>n>>k;unordered_map<long long,long long>f;long long ans=0,x;for(int i=0;i<n;i++){cin>>x;ans+=f[k-x];f[x]++;}cout<<ans<<'\n';}