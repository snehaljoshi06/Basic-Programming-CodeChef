#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(){int n;cin>>n;vector<vector<long long>>a(n,vector<long long>(n));for(auto&r:a)for(auto&x:r)cin>>x;if(n<2){cout<<"No valid pair\n";return 0;}vector<vector<long long>>s=a;for(int i=n-1;i>=0;i--)for(int j=n-1;j>=0;j--){if(i+1<n)s[i][j]=max(s[i][j],s[i+1][j]);if(j+1<n)s[i][j]=max(s[i][j],s[i][j+1]);}long long ans=LLONG_MIN;for(int i=0;i<n-1;i++)for(int j=0;j<n-1;j++)ans=max(ans,s[i+1][j+1]-a[i][j]);cout<<ans<<'\n';}