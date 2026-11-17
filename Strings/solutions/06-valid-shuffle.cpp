#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){string a,b,c;getline(cin,a);getline(cin,b);getline(cin,c);if(c.size()!=a.size()+b.size()){cout<<"Not a valid shuffle\n";return 0;}vector<vector<bool>>dp(a.size()+1,vector<bool>(b.size()+1,false));dp[0][0]=true;for(size_t i=0;i<=a.size();i++)for(size_t j=0;j<=b.size();j++){if(i&&a[i-1]==c[i+j-1])dp[i][j]=dp[i][j]||dp[i-1][j];if(j&&b[j-1]==c[i+j-1])dp[i][j]=dp[i][j]||dp[i][j-1];}cout<<(dp[a.size()][b.size()]?"Valid shuffle":"Not a valid shuffle")<<'\n';}