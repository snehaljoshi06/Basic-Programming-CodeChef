#include <iostream>
#include <vector>
#include <limits>
using namespace std;
int main(){int n,width;cin>>n>>width;vector<int>a(n);for(int&x:a)cin>>x;const long long INF=numeric_limits<long long>::max()/4;vector<long long>dp(n+1,INF);vector<int>nextBreak(n);dp[n]=0;for(int i=n-1;i>=0;i--){long long used=0;for(int j=i;j<n;j++){used+=a[j]+(j>i);if(used>width)break;long long cost=(j==n-1)?0:(long long)(width-used)*(width-used)*(width-used)+dp[j+1];if(cost<dp[i]){dp[i]=cost;nextBreak[i]=j+1;}}}if(dp[0]>=INF){cout<<"Word cannot fit within line width\n";return 0;}for(int i=0;i<n;){int j=nextBreak[i];for(int k=i;k<j;k++)cout<<a[k]<<(k+1==j?'\n':' ');i=j;}cout<<"Cost: "<<dp[0]<<'\n';}