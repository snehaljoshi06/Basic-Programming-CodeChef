#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int n;cin>>n;vector<vector<long long>>a(n,vector<long long>(n));for(auto&r:a)for(auto&x:r)cin>>x;for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)swap(a[i][j],a[j][i]);for(auto&r:a)reverse(r.begin(),r.end());for(auto&r:a){for(auto x:r)cout<<x<<' ';cout<<'\n';}}