#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){int r,c;cin>>r>>c;unordered_map<long long,int>freq;for(int i=0;i<r;i++){unordered_map<long long,bool>seen;for(int j=0;j<c;j++){long long x;cin>>x;if(!seen[x]){freq[x]++;seen[x]=true;}}}vector<long long>ans;for(auto [x,count]:freq)if(count==r)ans.push_back(x);sort(ans.begin(),ans.end());if(ans.empty())cout<<"No common elements";else for(auto x:ans)cout<<x<<' ';cout<<'\n';}