#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){string s;getline(cin,s);int n=s.size();vector<vector<int>>dp(n+1,vector<int>(n+1));for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)dp[i][j]=(s[i-1]==s[j-1]&&i!=j)?1+dp[i-1][j-1]:max(dp[i-1][j],dp[i][j-1]);cout<<dp[n][n]<<'\n';}