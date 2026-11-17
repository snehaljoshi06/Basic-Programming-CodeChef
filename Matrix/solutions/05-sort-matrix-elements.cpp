#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int r,c;cin>>r>>c;vector<long long>v;for(int i=0;i<r*c;i++){long long x;cin>>x;v.push_back(x);}sort(v.begin(),v.end());for(int i=0;i<r;i++){for(int j=0;j<c;j++)cout<<v[i*c+j]<<' ';cout<<'\n';}}