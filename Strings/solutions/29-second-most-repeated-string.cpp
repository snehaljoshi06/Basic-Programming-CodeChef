#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){int n;cin>>n;unordered_map<string,int>f;for(int i=0;i<n;i++){string s;cin>>s;f[s]++;}vector<pair<string,int>>v(f.begin(),f.end());sort(v.begin(),v.end(),[](auto&a,auto&b){if(a.second!=b.second)return a.second>b.second;return a.first<b.first;});if(v.size()<2)cout<<"No second most frequent string\n";else cout<<v[1].first<<'\n';}