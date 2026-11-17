#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){string s;getline(cin,s);int n=s.size();if(n==0){cout<<0<<'\n';return 0;}vector<vector<long long>>dp(n,vector<long long>(n));for(int i=n-1;i>=0;i--){dp[i][i]=1;for(int j=i+1;j<n;j++){if(s[i]==s[j])dp[i][j]=dp[i+1][j]+dp[i][j-1]+1;else dp[i][j]=dp[i+1][j]+dp[i][j-1]-(j>i+1?dp[i+1][j-1]:0);}}cout<<dp[0][n-1]<<'\n';}