#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;vector<vector<long long>>a(n,vector<long long>(n));for(auto&r:a)for(auto&x:r)cin>>x;for(int i=0;i<n;i++){for(int j=0;j<n;j++)cout<<(i<=j?a[i][j]:0)<<' ';cout<<'\n';}}