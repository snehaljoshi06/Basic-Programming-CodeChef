#include <iostream>
#include <vector>
using namespace std;
int main(){int r,c;cin>>r>>c;vector<vector<int>>a(r,vector<int>(c));int count=0;for(auto&row:a)for(int&x:row){cin>>x;if(x!=0)count++;}cout<<"Row Col Value\n"<<r<<' '<<c<<' '<<count<<'\n';for(int i=0;i<r;i++)for(int j=0;j<c;j++)if(a[i][j]!=0)cout<<i<<' '<<j<<' '<<a[i][j]<<'\n';}