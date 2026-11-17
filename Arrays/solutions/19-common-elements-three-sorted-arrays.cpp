#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int n,m,p;cin>>n>>m>>p;vector<long long>a(n),b(m),c(p);for(auto&x:a)cin>>x;for(auto&x:b)cin>>x;for(auto&x:c)cin>>x;int i=0,j=0,k=0;vector<long long>ans;while(i<n&&j<m&&k<p){if(a[i]==b[j]&&b[j]==c[k]){if(ans.empty()||ans.back()!=a[i])ans.push_back(a[i]);i++;j++;k++;}else{long long v=min(a[i],min(b[j],c[k]));if(a[i]==v)i++;if(b[j]==v)j++;if(c[k]==v)k++;}}if(ans.empty())cout<<-1;else for(auto x:ans)cout<<x<<' ';cout<<'\n';}