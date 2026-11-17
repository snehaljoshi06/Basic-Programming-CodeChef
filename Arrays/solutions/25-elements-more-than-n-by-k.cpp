#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){int n,k;cin>>n>>k;unordered_map<long long,int>f;for(int i=0;i<n;i++){long long x;cin>>x;f[x]++;}vector<long long>ans;for(auto e:f)if(k>0&&e.second>n/k)ans.push_back(e.first);sort(ans.begin(),ans.end());for(auto x:ans)cout<<x<<' ';cout<<'\n';}