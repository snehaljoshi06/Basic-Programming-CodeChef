#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int n;cin>>n;vector<pair<long long,long long>>v(n);for(auto&x:v)cin>>x.first>>x.second;sort(v.begin(),v.end());vector<pair<long long,long long>>ans;for(auto p:v){if(ans.empty()||p.first>ans.back().second)ans.push_back(p);else ans.back().second=max(ans.back().second,p.second);}for(auto p:ans)cout<<p.first<<' '<<p.second<<'\n';}