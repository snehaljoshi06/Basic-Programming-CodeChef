#include <iostream>
#include <vector>
using namespace std;
int main(){int r,c;cin>>r>>c;vector<vector<int>>a(r,vector<int>(c));for(auto&row:a)for(int&x:row)cin>>x;int best=-1,j=c-1;for(int i=0;i<r;i++){while(j>=0&&a[i][j]==1)j--;if(j==-1){cout<<i<<'\n';return 0;}}cout<<best<<'\n';}