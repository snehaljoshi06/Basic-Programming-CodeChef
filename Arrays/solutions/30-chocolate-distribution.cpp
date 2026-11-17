#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(){int n,m;cin>>n>>m;vector<long long>a(n);for(auto&x:a)cin>>x;if(m<=0||m>n){cout<<"Invalid number of students\n";return 0;}sort(a.begin(),a.end());long long ans=LLONG_MAX;for(int i=0;i+m<=n;i++)ans=min(ans,a[i+m-1]-a[i]);cout<<ans<<'\n';}