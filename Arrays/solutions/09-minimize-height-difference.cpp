#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int n;long long k;cin>>n>>k;vector<long long>a(n);for(auto&x:a)cin>>x;if(n<=1){cout<<0<<'\n';return 0;}sort(a.begin(),a.end());long long ans=a.back()-a.front(),small=a.front()+k,large=a.back()-k;if(small>large)swap(small,large);for(int i=1;i<n-1;i++){long long sub=a[i]-k,add=a[i]+k;if(sub<0)continue;if(sub>=small||add<=large)continue;if(large-sub<=add-small)small=sub;else large=add;}cout<<min(ans,large-small)<<'\n';}