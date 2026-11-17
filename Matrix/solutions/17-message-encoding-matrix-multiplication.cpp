#include <iostream>
#include <vector>
using namespace std;
int main(){int r,k,c;cin>>r>>k>>c;vector<vector<long long>>message(r,vector<long long>(k)),key(k,vector<long long>(c));for(auto&row:message)for(auto&x:row)cin>>x;for(auto&row:key)for(auto&x:row)cin>>x;vector<vector<long long>>encoded(r,vector<long long>(c));for(int i=0;i<r;i++)for(int j=0;j<c;j++)for(int t=0;t<k;t++)encoded[i][j]+=message[i][t]*key[t][j];cout<<"Encoded matrix:\n";for(auto&row:encoded){for(auto x:row)cout<<x<<' ';cout<<'\n';}}