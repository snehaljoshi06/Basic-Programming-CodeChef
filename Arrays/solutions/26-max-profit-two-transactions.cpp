#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int n;cin>>n;vector<long long>p(n);for(auto&x:p)cin>>x;if(n<2){cout<<0<<'\n';return 0;}vector<long long>left(n),right(n);long long mn=p[0];for(int i=1;i<n;i++){mn=min(mn,p[i]);left[i]=max(left[i-1],p[i]-mn);}long long mx=p[n-1];for(int i=n-2;i>=0;i--){mx=max(mx,p[i]);right[i]=max(right[i+1],mx-p[i]);}long long ans=0;for(int i=0;i<n;i++)ans=max(ans,left[i]+right[i]);cout<<ans<<'\n';}