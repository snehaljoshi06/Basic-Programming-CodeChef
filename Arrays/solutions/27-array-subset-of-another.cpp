#include <iostream>
#include <unordered_map>
using namespace std;
int main(){int n,m;cin>>n>>m;unordered_map<long long,int>f;long long x;for(int i=0;i<n;i++){cin>>x;f[x]++;}bool ok=true;for(int i=0;i<m;i++){cin>>x;if(f[x]==0)ok=false;else f[x]--;}cout<<(ok?"Yes":"No")<<'\n';}