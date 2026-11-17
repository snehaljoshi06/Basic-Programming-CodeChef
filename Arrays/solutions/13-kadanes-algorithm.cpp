#include <iostream>
#include <algorithm>
using namespace std;
int main(){int n;cin>>n;if(n<=0)return 0;long long x;cin>>x;long long cur=x,ans=x;for(int i=1;i<n;i++){cin>>x;cur=max(x,cur+x);ans=max(ans,cur);}cout<<ans<<'\n';}