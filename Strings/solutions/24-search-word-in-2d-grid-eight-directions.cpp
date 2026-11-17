#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){int n,m;cin>>n>>m;vector<string>g(n);for(auto&x:g)cin>>x;string w;cin>>w;int dr[]={-1,-1,-1,0,0,1,1,1},dc[]={-1,0,1,-1,1,-1,0,1},count=0;for(int r=0;r<n;r++)for(int c=0;c<m;c++)for(int d=0;d<8;d++){int k=0,x=r,y=c;while(k<(int)w.size()&&x>=0&&x<n&&y>=0&&y<m&&g[x][y]==w[k]){k++;x+=dr[d];y+=dc[d];}if(k==(int)w.size())count++;}cout<<count<<'\n';}