#include <iostream>
#include <algorithm>
using namespace std;
int main(){int n;cin>>n;if(n<=0)return 0;long long x;cin>>x;long long mx=x,mn=x,ans=x;for(int i=1;i<n;i++){cin>>x;if(x<0)swap(mx,mn);mx=max(x,mx*x);mn=min(x,mn*x);ans=max(ans,mx);}cout<<ans<<'\n';}