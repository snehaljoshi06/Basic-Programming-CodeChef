#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int r,c;cin>>r>>c;vector<vector<int>>dp(r,vector<int>(c));int best=0,br=0,bc=0;for(int i=0;i<r;i++)for(int j=0;j<c;j++){int x;cin>>x;if(x){dp[i][j]=1;if(i&&j)dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});if(dp[i][j]>best){best=dp[i][j];br=i;bc=j;}}}cout<<"Maximum square side: "<<best<<"\nSubmatrix:\n";for(int i=br-best+1;i<=br&&best>0;i++){for(int j=bc-best+1;j<=bc;j++)cout<<1<<' ';cout<<'\n';}}